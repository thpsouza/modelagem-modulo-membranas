#include "Geometria/geometria.h"
#include "Mistura/especies.h"
#include <iostream>

using namespace std;


void geometria() {
    // 1D
    ArestaCubo aresta{2.1};
    //aresta.setValue(2.1);
    ComprimentoFibra cf{2.1};
    //cf.setValue(2.1);
    DiametroFibra df{1.2};
    //df.setValue(1.2);

    // 2D, 3D
    VolumeCubo Vc;
    Vc.calcular(aresta);
    VolumeFibra Vf;
    Vf.calcular(df, cf);

    // Porosidade
    PorosidadeCubo porosidade{0.3};
    //porosidade.setValue(0.3);

    // Numero de Fibras
    NumFibras nf;
    nf.calcular(Vc, Vf, porosidade);

    // prova real
    int Nf = (int) round(
            pow(aresta.getValue(), 3) * (1 - porosidade.getValue()) / (cf.getValue() * pi * pow(df.getValue(), 2) / 4)
    );

    cout << "Geometria:" << endl;
    cout << "Prova real: " << ((Nf == nf.getValue()) ? "True" : "False") << endl;
    cout << "Numero de fibras = " + to_string(Nf) << endl << endl;
}

void mistura() {
    Elemento atomos1[9] {
        carbono, hidrogenio, hidrogenio, hidrogenio,
        carbono, hidrogenio, hidrogenio,
        oxigenio, hidrogenio
    };
    Elemento atomos2[3] {hidrogenio, hidrogenio, oxigenio};

    Molecula etanol {"C2H5OH", atomos1, 9};
    Molecula agua {"H2O", atomos2, 3};

    Molecula moleculas[2] {etanol, agua};
    double fracoes[2] {0.956, 0.044};

    Mistura alcool {moleculas, fracoes, 2};

    cout << "Mistura:" << endl;
    cout << string(alcool)<< endl;
}


int main() {
    geometria();
    mistura();
    return 0;
}