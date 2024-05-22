#include "mistura.h"

/// Representação de átomos
// Construtor
Elemento::Elemento(string simbolo, double massaAtomica) {
    elemento = simbolo;
    MA.setValue(massaAtomica);
}
// getter - massa atômica
double Elemento::getMassa() {
    return MA.getValue();
}


/// Representação de moléculas
// Construtor
Molecula::Molecula(string formula, Elemento *atomos, int n) {
    nome = formula;
    for (int i = 0; i<n; i++) {
        componentes.push_back(atomos[i]);
    }
    calcularMassaMolecular();
}
// Representação da molécula em string
Molecula::operator string() const {
    return nome + " (" + to_string(MM.getValue()) + ")";
}
// Cálculo da massa molecular com base nos pesos atomicos
void Molecula::calcularMassaMolecular() {
    double value = 0;
    for (Elemento e : componentes) {
        value += e.getMassa();
    }
    MM.setValue(value);
}
// getter - massa molecular
double Molecula::getMassa() {
    return MM.getValue();
}


/// Representação de misturas
// Construtor
Mistura::Mistura(Molecula *moleculas, double *fracoesMassicas, int n) {
    for (int i = 0; i<n; i++) {
        componentes.push_back(moleculas[i]);
        fracoes.push_back(fracoesMassicas[i]);
    }
}
// Representação da mistura em string
Mistura::operator string() const {
    string s;
    for (int i = 0; i<componentes.size(); i++) {
        s += string(componentes[i]) + " - " + to_string(fracoes[i]) + "\n";
    }
    return s;
}

