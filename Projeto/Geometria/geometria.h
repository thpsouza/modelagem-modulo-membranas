#ifndef PROJETO_GEOMETRIA_H
#define PROJETO_GEOMETRIA_H

#include "../Gerais/gerais.h"

/// Espaços 1D
class ArestaCubo : public Base {
};

class ComprimentoFibra : public Base {
};

class DiametroFibra : public Base {
};


/// Espaços 2D e 3D
class AreaFaceCubo : public Base {
public:
    AreaFaceCubo(ArestaCubo l);
    void calcular(ArestaCubo l);
};

class VolumeCubo : public Base {
public:
    VolumeCubo(ArestaCubo l);
    void calcular(ArestaCubo l);
};

class AreaSupFibra : public Base {
public:
    AreaSupFibra(DiametroFibra df, ComprimentoFibra cf);
    void calcular(DiametroFibra df, ComprimentoFibra cf);
};

class AreaTransvFibra : public Base {
public:
    AreaTransvFibra(DiametroFibra df);
    void calcular(DiametroFibra df);
};

class VolumeFibra : public Base {
public:
    VolumeFibra(DiametroFibra df, ComprimentoFibra cf);
    void calcular(DiametroFibra df, ComprimentoFibra cf);
};

/// Propriedades do volume de controle
class Porosidade : public Base {
};

class NumFibras : public BaseInt {
public:
    NumFibras(ArestaCubo l, ComprimentoFibra cf, DiametroFibra df, Porosidade e);
    NumFibras(VolumeCubo Vc, VolumeFibra Vf, Porosidade e);
    void calcular(VolumeCubo Vc, VolumeFibra Vf, Porosidade e);
};

class AreaTotalTransferencia : public Base {
public:
    AreaTotalTransferencia(AreaSupFibra As, NumFibras n);
    void calcular(AreaSupFibra As, NumFibras n);
};


/// Volume de controle
class VolumeDeControle {

};


#endif //PROJETO_GEOMETRIA_H
