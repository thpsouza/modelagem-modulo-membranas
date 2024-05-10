#include "geometria.h"

/// Espaços 2D e 3D
void AreaCubo::calcular(ArestaCubo l) {
    setValue(pow(l.getValue(), 2));
}

void VolumeCubo::calcular(ArestaCubo l) {
    setValue(pow(l.getValue(), 3));
}

void AreaSupFibra::calcular(DiametroFibra df, ComprimentoFibra cf) {
    setValue(pi * df.getValue() * cf.getValue());
}

void AreaTransvFibra::calcular(DiametroFibra df) {
    setValue(pi * pow(df.getValue(), 2) / 4);
}

void VolumeFibra::calcular(DiametroFibra df, ComprimentoFibra cf) {
    setValue(cf.getValue() * pi * pow(df.getValue(), 2) / 4);
}


/// Propriedades do elemento de volume
void NumFibras::calcular(VolumeCubo Vc, VolumeFibra Vf, PorosidadeCubo e) {
    value = (int) round(Vc.getValue() * (1 - e.getValue()) / Vf.getValue());
}

int NumFibras::getValue() const {
    return value;
}
