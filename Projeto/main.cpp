#include "Geometria/geometria.h"
#include "Mistura/especies.h"
#include <iostream>
#include <matplot/matplot.h>

using namespace std;

void geometria() {
    // 1D
    ArestaCubo l{2.1};
    ComprimentoFibra cf{2.1};
    DiametroFibra df{1.2};

    // 2D, 3D
    VolumeCubo Vc{l};
    VolumeFibra Vf{df, cf};

    // Porosidade
    PorosidadeCubo porosidade{0.3};

    // Numero de Fibras
    NumFibras nf{Vc, Vf, porosidade};

    // prova real: numero de fibras
    int Nf = (int) round(
            pow(l.getValue(), 3) * (1 - porosidade.getValue()) /
            (cf.getValue() * M_PI * pow(df.getValue(), 2) / 4)
    );

    cout << "Geometria:" << endl;
    cout << "Numero de fibras = " + to_string(Nf) << endl;
    cout << "Prova real: " << ((Nf == nf.getValue()) ? "True" : "False") << endl << endl;
}

void mistura() {
    vector<Elemento> atomos1{
            carbono, hidrogenio, hidrogenio, hidrogenio,
            carbono, hidrogenio, hidrogenio,
            oxigenio, hidrogenio
    };
    vector<Elemento> atomos2{hidrogenio, hidrogenio, oxigenio};

    Molecula etanol{"C2H5OH", atomos1};
    Molecula agua{"H2O", atomos2};

    vector<Molecula> moleculas{etanol, agua};
    vector<double> fracoes{0.956, 0.044};

    Mistura alcool{moleculas, fracoes};

    cout << "Mistura:" << endl;
    cout << string(alcool) << endl;
}

int main() {
    geometria();
    mistura();
    return 0;
}