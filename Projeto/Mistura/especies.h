#ifndef PROJETO_ESPECIES_H
#define PROJETO_ESPECIES_H

#include "../Gerais/base.h"
#include <iostream>

using namespace std;

/// Massas
class MassaAtomica : public Base {
};

class MassaMolecular : public Base {
};


/// Classe para representar um átomo
class Elemento {
    string simbolo;
    MassaAtomica MA;
public:
    Elemento(string elemento, double massa);
};


/// Classe para representar uma molécula
class Especie {
    string nome;
    MassaMolecular MM;
    Elemento componentes[1];
public:
    Especie(string especie, Elemento atomos[]);
    void calcularMassaMolecular();
};


/// Classe para representar a mistura
class Mistura {
    Especie componentes[1];
    double fracoes[1];
public:
    Mistura(Especie moleculas[], double fracoesMassicas[]);
};


#endif //PROJETO_ESPECIES_H
