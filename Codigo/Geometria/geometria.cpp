//#include "geometria.h"
//#include "../Gerais/base.h"
#include <cmath>

#define pi 3.141592653589793

/// Classe base para um valor
class Base {
    double value;
public:
    // Construtores
    Base() {}
    Base(double x) {
        value = x;
    }
    // Modificadores
    double getValue() const {
        return value;
    }
    void setValue(double newValue) {
        value = newValue;
    }
};


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
    void calcular(ArestaCubo l) {
        setValue(pow(l.getValue(), 2));
    }
};

class VolumeCubo : public Base {
public:
    void calcular(ArestaCubo l) {
        setValue(pow(l.getValue(), 3));
    }
};

class AreaSupFibra : public Base {
public:
    void calcular(DiametroFibra df, ComprimentoFibra cf) {
        setValue(pi * df.getValue() * cf.getValue());
    }
};

class AreaTransvFibra : public Base {
public:
    void calcular(DiametroFibra df) {
        setValue(pi * pow(df.getValue(), 2) / 4);
    }
};

class VolumeFibra : public Base {
public:
    void calcular(DiametroFibra df, ComprimentoFibra cf) {
        setValue(cf.getValue() * pi * pow(df.getValue(), 2) / 4);
    }
};


/// Propriedades do elemento de volume
class PorosidadeCubo : public Base {
};

class NumFibras {
    int value;
public:
    void calcular(VolumeCubo Vc, VolumeFibra Vf, PorosidadeCubo e) {
        value = (int) round(Vc.getValue() * (1 - e.getValue()) / Vf.getValue());
    }

    int getValue() const {
        return value;
    }
};
