#ifndef PROJETO_MISTURA_H
#define PROJETO_MISTURA_H

#include "../Gerais/base.h"
#include <iostream>
#include <vector>


/// Massas
class MassaAtomica : public Base {
};

class MassaMolecular : public Base {
};


/// Classe para representar um átomo
class Elemento {
    std::string simbolo;
    MassaAtomica MA;
    double raio;
public:
    Elemento(std::string simbolo, double massaAtomica);
    double getMassa();
};


/// Classe para representar uma molécula
class Molecula {
    std::string formula;
    MassaMolecular MM;
    std::vector<Elemento> componentes;
    void calcularMassaMolecular();
public:
    Molecula(std::string formula, std::vector<Elemento> atomos);
    Molecula(std::string formula, Elemento atomos[], int n);
    operator std::string() const;
    double getMassa();
};



/// Classe para representar a mistura
class Mistura {
    std::vector<Molecula> componentes;
    std::vector<double> fracoes;
public:
    Mistura(std::vector<Molecula> moleculas, std::vector<double> fracoesMassicas);
    Mistura(Molecula moleculas[], double fracoesMassicas[], int n);
    operator std::string() const;
};


#endif //PROJETO_MISTURA_H
