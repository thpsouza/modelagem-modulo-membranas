#include "mistura.h"

/// Representação de átomos
// Construtor
Elemento::Elemento(std::string simbolo, double massaAtomica) {
    Elemento::simbolo = simbolo;
    MA.setValue(massaAtomica);
}

// getter - massa atômica
double Elemento::getMassa() {
    return MA.getValue();
}


/// Representação de moléculas
// Construtores
Molecula::Molecula(std::string formula, std::vector<Elemento> atomos, double raio) {
    Molecula::formula = formula;
    Molecula::raio.setValue(raio);
    componentes = atomos;
    calcularMassaMolecular();
}

Molecula::Molecula(std::string formula, Elemento *atomos, int n, double raio) {
    Molecula::formula = formula;
    Molecula::raio.setValue(raio);
    for (int i = 0; i < n; i++) {
        componentes.push_back(atomos[i]);
    }
    calcularMassaMolecular();
}

Molecula::Molecula(std::string formula, std::vector<Elemento> atomos) {
    Molecula::formula = formula;
    componentes = atomos;
    calcularMassaMolecular();
}

// Representação da molécula em string
Molecula::operator std::string() const {
    return formula + " (" + std::to_string(MM.getValue()) + ")";
}

// Cálculo da massa molecular com base nos pesos atomicos
void Molecula::calcularMassaMolecular() {
    double value = 0;
    for (Elemento e: componentes) {
        value += e.getMassa();
    }
    MM.setValue(value);
}

// getter - massa molecular
double Molecula::getMassa() {
    return MM.getValue();
}



/// Representação de misturas
// Construtores
Mistura::Mistura(std::vector<Molecula> moleculas, std::vector<double> fracoesMassicas) {
    componentes = moleculas;
    fracoes = fracoesMassicas;
}

Mistura::Mistura(Molecula *moleculas, double *fracoesMassicas, int n) {
    for (int i = 0; i < n; i++) {
        componentes.push_back(moleculas[i]);
        fracoes.push_back(fracoesMassicas[i]);
    }
}

// Representação da mistura em string
Mistura::operator std::string() const {
    std::string s;
    for (int i = 0; i < componentes.size(); i++) {
        s += std::string(componentes[i]) + " - " + std::to_string(fracoes[i]) + "\n";
    }
    return s;
}


