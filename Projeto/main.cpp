#include "Geometria/geometria.h"
#include "Mistura/especies.h"
#include "Gerais/gerais.h"
#include <iostream>
//#include <matplot/matplot.h>

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

//void plot() {
//    using namespace matplot;
//
//    // criando lista de pontos [0, 2*pi]
//    std::vector<double> x = linspace(0, 2 * pi);
//
//    // calculando expressões com lista de pontos
//    std::vector<double> y1 = transform(x, [](double x) { return 5 * sin(x); });
//    std::vector<double> y2 = transform(x, [](double x) { return sin(5 * x); });
//
//    // ajustando layout dos gráficos - 2 linhas, 1 coluna
//    tiledlayout(2, 1);
//
//    // instância do primeiro gráfico
//    auto ax1 = nexttile();
//    stairs(ax1, x, y1);
//
//    // instância do segundo gráfico
//    auto ax2 = nexttile();
//    stairs(ax2, x, y2);
//
//    show();
//}

int main() {
    geometria();
    mistura();
    //plot();
    return 0;
}