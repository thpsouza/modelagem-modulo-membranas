#include "Geometria/geometria.h"
#include "Mistura/especies.h"
#include "Gerais/gerais.h"
#include "Gerais/matplotlibcpp.h"
//#include <matplot/matplot.h>

#include <iostream>

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





void plot() {
    namespace plt = matplotlibcpp;
    auto x = linspace(0.0, 2*M_PI);
    auto y = transform(x, [](double x) {return sin(x);});
    plt::plot(x,y);
    plt::title("Teste", {{"size", "15"}});
    plt::show();
    //plt::savefig("../Teste.pdf");
}

int main() {
    geometria();
    mistura();
    plot();

    return 0;
}