#include "Geometria/geometria.h"
#include "Mistura/especies.h"
#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<Elemento> teste {{"H", 1}, {"C", 14}};

    for (Elemento e : teste) {
        cout << e.getMassa() << endl;
    }

    return 0;
}


int main1() {

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

    cout << (Nf == nf.getValue()) << endl;
    cout << Nf << endl;

    return 0;
}