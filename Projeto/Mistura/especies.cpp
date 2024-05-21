#include "especies.h"

/// Representação dos átomos
Elemento::Elemento(string simbolo, double massaAtomica) {
    elemento = simbolo;
    MA.setValue(massaAtomica);
}

double Elemento::getMassa() {
    return MA.getValue();
}


/// Representação das moléculas
// Construtor


// Cálculo da massa molecular com base nos pesos atomicos
void Especie::calcularMassaMolecular() {
    // Implementar
}

/// Representação da mistura

