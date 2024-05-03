//#include "especies.h"
#include <iostream>

using namespace std;

class MassaAtomica : public Base {
};
class MassaMolecular : public Base {
};

class Elemento {
    string nome;
    double massaAtomica;
public:

};

class Especie {
    string nome;
    double massaMolecular;
    Elemento componentes[1];
public:

};

class Mistura {
    Especie componentes[1];
    double fracoes[1];
public:

};