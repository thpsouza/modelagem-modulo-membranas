#include "especies.h"

/// Representação dos átomos
Elemento::Elemento(string elemento, double massa) {
    simbolo = elemento;
    MA.setValue(massa);
}


/// Representação das moléculas
// Construtor
Especie::Especie(string especie, Elemento *atomos) {
    componentes[0] = atomos[0];
}
// Cálculo da massa molecular com base nos pesos atomicos
void Especie::calcularMassaMolecular() {
    // Implementar
}



/// Representação da mistura
Mistura::Mistura(Especie *moleculas, double *fracoesMassicas) {
    ;
}
