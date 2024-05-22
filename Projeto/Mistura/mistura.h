#ifndef PROJETO_MISTURA_H
#define PROJETO_MISTURA_H

#include "../Gerais/base.h"
#include <iostream>
#include <vector>

using namespace std;

/// Massas
class MassaAtomica : public Base {
};

class MassaMolecular : public Base {
};


/// Classe para representar um átomo
class Elemento {
    string elemento;
    MassaAtomica MA;
    double raio;
public:
    Elemento(string simbolo, double massaAtomica);
    double getMassa();
};


/// Classe para representar uma molécula
class Molecula {
    string nome;
    MassaMolecular MM;
    vector<Elemento> componentes;
    void calcularMassaMolecular();
public:
    Molecula(string formula, Elemento atomos[], int n);
    operator string() const;
    double getMassa();
};



/// Classe para representar a mistura
class Mistura {
    vector<Molecula> componentes;
    vector<double> fracoes;
public:
    Mistura(Molecula moleculas[], double fracoesMassicas[], int n);
    operator string() const;
};


#endif //PROJETO_MISTURA_H
