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
class AreaCubo : public Base {
public:
    AreaCubo(ArestaCubo l);
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

/// Propriedades do simbolo de volume
class PorosidadeCubo : public Base {
};

class NumFibras {
    int value;
public:
    NumFibras(VolumeCubo Vc, VolumeFibra Vf, PorosidadeCubo e);
    void calcular(VolumeCubo Vc, VolumeFibra Vf, PorosidadeCubo e);
    int getValue() const;
};


#endif //PROJETO_GEOMETRIA_H
