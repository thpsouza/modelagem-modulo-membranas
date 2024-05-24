#include "geometria.h"

/// Espaços 2D e 3D
AreaCubo::AreaCubo(ArestaCubo l) {
    calcular(l);
}
void AreaCubo::calcular(ArestaCubo l) {
    setValue(pow(l.getValue(), 2));
}


VolumeCubo::VolumeCubo(ArestaCubo l) {
    calcular(l);
}
void VolumeCubo::calcular(ArestaCubo l) {
    setValue(pow(l.getValue(), 3));
}


AreaSupFibra::AreaSupFibra(DiametroFibra df, ComprimentoFibra cf) {
    calcular(df, cf);
}
void AreaSupFibra::calcular(DiametroFibra df, ComprimentoFibra cf) {
    setValue(pi * df.getValue() * cf.getValue());
}


AreaTransvFibra::AreaTransvFibra(DiametroFibra df) {
    calcular(df);
}
void AreaTransvFibra::calcular(DiametroFibra df) {
    setValue(pi * pow(df.getValue(), 2) / 4);
}


VolumeFibra::VolumeFibra(DiametroFibra df, ComprimentoFibra cf) {
    calcular(df, cf);
}
void VolumeFibra::calcular(DiametroFibra df, ComprimentoFibra cf) {
    setValue(cf.getValue() * pi * pow(df.getValue(), 2) / 4);
}


/// Propriedades do simbolo de volume
NumFibras::NumFibras(VolumeCubo Vc, VolumeFibra Vf, PorosidadeCubo e) {
    calcular(Vc, Vf, e);
}
void NumFibras::calcular(VolumeCubo Vc, VolumeFibra Vf, PorosidadeCubo e) {
    value = (int) round(Vc.getValue() * (1 - e.getValue()) / Vf.getValue());
}
int NumFibras::getValue() const {
    return value;
}


