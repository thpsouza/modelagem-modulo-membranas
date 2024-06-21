#include "geometria.h"

/// Espaços 2D e 3D
AreaFaceCubo::AreaFaceCubo(ArestaCubo l) {
    calcular(l);
}
void AreaFaceCubo::calcular(ArestaCubo l) {
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
    setValue(M_PI * df.getValue() * cf.getValue());
}


AreaTransvFibra::AreaTransvFibra(DiametroFibra df) {
    calcular(df);
}
void AreaTransvFibra::calcular(DiametroFibra df) {
    setValue(M_PI * pow(df.getValue(), 2) / 4);
}


VolumeFibra::VolumeFibra(DiametroFibra df, ComprimentoFibra cf) {
    calcular(df, cf);
}
void VolumeFibra::calcular(DiametroFibra df, ComprimentoFibra cf) {
    setValue(cf.getValue() * M_PI * pow(df.getValue(), 2) / 4);
}


/// Propriedades do volume de controle
NumFibras::NumFibras(ArestaCubo l, ComprimentoFibra cf, DiametroFibra df, Porosidade e) {
    VolumeCubo Vc{l};
    VolumeFibra Vf{df, cf};
    calcular(Vc, Vf, e);
}
NumFibras::NumFibras(VolumeCubo Vc, VolumeFibra Vf, Porosidade e) {
    calcular(Vc, Vf, e);
}
void NumFibras::calcular(VolumeCubo Vc, VolumeFibra Vf, Porosidade e) {
    setValue((int) round(Vc.getValue() * (1 - e.getValue()) / Vf.getValue()));
}


AreaTotalTransferencia::AreaTotalTransferencia(ArestaCubo l, ComprimentoFibra cf, DiametroFibra df, Porosidade e) {
    AreaSupFibra As{df, cf};
    NumFibras n{l,cf,df,e};
    calcular(As, n);
}
AreaTotalTransferencia::AreaTotalTransferencia(AreaSupFibra As, NumFibras n) {
    calcular(As, n);
}
void AreaTotalTransferencia::calcular(AreaSupFibra As, NumFibras n) {
    setValue(As.getValue() * n.getValue());
}




