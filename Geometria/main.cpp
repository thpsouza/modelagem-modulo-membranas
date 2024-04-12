#include <iostream>
#include <cmath>
#define pi 3.141592653589793

using namespace std;

/// Classe base
class Base {
    double value;
public:
    // Construtores
    Base() {}
    Base(double x) {value = x;}

    // Modificadores
    double getValue() const {
        return value;
    }
    void setValue(double newValue) {
        value = newValue;
    }
};

/// Espaços 1D
class ArestaCubo : public Base {};
class ComprimentoFibra : public Base {};
class DiametroFibra : public Base {};

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
class PorosidadeCubo : public Base {};

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


int main() {

    // 1D
    ArestaCubo aresta {2.1};
    //aresta.setValue(2.1);
    ComprimentoFibra cf {2.1};
    //cf.setValue(2.1);
    DiametroFibra df {1.2};
    //df.setValue(1.2);

    // 2D, 3D
    VolumeCubo Vc;
    Vc.calcular(aresta);
    VolumeFibra Vf;
    Vf.calcular(df, cf);

    // Porosidade
    PorosidadeCubo porosidade {0.3};
    //porosidade.setValue(0.3);

    // Numero de Fibras
    NumFibras nf;
    nf.calcular(Vc, Vf, porosidade);

    // prova real
    int Nf = (int) round(pow(aresta.getValue(),3) * (1-porosidade.getValue())  / (cf.getValue() * pi * pow(df.getValue(),2)/4));

    cout << (Nf == nf.getValue()) << endl;

    return 0;
}