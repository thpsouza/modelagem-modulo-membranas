#ifndef PROJETO_GEOMETRIA_H
#define PROJETO_GEOMETRIA_H

#include "../Gerais/base.h"
#include <cmath>
#define pi 3.141592653589793

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
    void calcular(ArestaCubo l);
};

class VolumeCubo : public Base {
public:
    void calcular(ArestaCubo l);
};

class AreaSupFibra : public Base {
public:
    void calcular(DiametroFibra df, ComprimentoFibra cf);
};

class AreaTransvFibra : public Base {
public:
    void calcular(DiametroFibra df);
};

class VolumeFibra : public Base {
public:
    void calcular(DiametroFibra df, ComprimentoFibra cf);
};

/// Propriedades do elemento de volume
class PorosidadeCubo : public Base {
};

class NumFibras {
    int value;
public:
    void calcular(VolumeCubo Vc, VolumeFibra Vf, PorosidadeCubo e);
    int getValue() const;
};


#endif //PROJETO_GEOMETRIA_H
