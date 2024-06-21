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
    AreaSupFibra As{df, cf};
    VolumeCubo Vc{l};
    VolumeFibra Vf{df, cf};

    // Porosidade
    Porosidade porosidade{0.3};

    // Numero de Fibras
    NumFibras nf{Vc, Vf, porosidade};

    // prova real: numero de fibras
    int Nf = (int) round(
            pow(l.getValue(), 3) * (1 - porosidade.getValue()) /
            (cf.getValue() * M_PI * pow(df.getValue(), 2) / 4)
    );

    // Area total de transferencia
    AreaTotalTransferencia At{l, cf, df, porosidade};

    cout << "Geometria:" << endl;
    cout << "Numero de fibras = " + string(nf) << endl;
    cout << "Prova real: " << ((Nf == nf.getValue()) ? "True" : "False") << endl;
    cout << "Area total de transferencia: " + string(At) << endl << endl;
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


//void plot_teste() {
//    namespace plt = matplotlibcpp;
//    auto x = linspace(0.0, 2*M_PI);
//    auto y = transform(x, [](double x) {return sin(x);});
//    plt::plot(x,y);
//    plt::title("Teste", {{"size", "15"}});
//    plt::show();
//    //plt::savefig("../Teste.pdf");
//}

void plot() {
    namespace plt = matplotlibcpp;

    /// Supondo arranjo alternado:
    Porosidade e{0.907};
    ArestaCubo l{1.0};
    ComprimentoFibra cf{1.0};
    DiametroFibra df{1.0};
    AreaTotalTransferencia At {l, cf, df, e};

    int N = 1;
    vector<double> x(N), y(N);
    for (int i = 0; i<=N; ++i) {
        x.push_back(i);
        //AreaTotalTransferencia At {l, cf, df, e};
        y.push_back(At.getValue());
        cout << x[i] << y[i] << endl;
    }

    plt::plot(x,y);
    plt::xlabel("numero de fibras");
    plt::ylabel("Area total de transferencia");
    plt::show();
}

int main() {
    geometria();
    mistura();
    plot();

    return 0;
}