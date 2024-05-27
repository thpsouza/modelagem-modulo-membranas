#ifndef PROJETO_MISTURA_H
#define PROJETO_MISTURA_H

#include "../Gerais/gerais.h"

/// Massas
class MassaAtomica : public Base {
};

class MassaMolecular : public Base {
};

class RaioMolecular : public Base {
};

/// Classe para representar um átomo
class Elemento {
    std::string simbolo;
    MassaAtomica MA;
public:
    Elemento(std::string simbolo, double massaAtomica);
    double getMassa();
};


/// Classe para representar uma molécula
class Molecula {
    std::string formula;
    MassaMolecular MM;
    RaioMolecular raio;
    std::vector<Elemento> componentes;
    void calcularMassaMolecular();
public:
    Molecula(std::string formula, std::vector<Elemento> atomos);
    Molecula(std::string formula, std::vector<Elemento> atomos, double raio);
    Molecula(std::string formula, Elemento atomos[], int n, double raio);
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
