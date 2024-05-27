#ifndef PROJETO_ESPECIES_H
#define PROJETO_ESPECIES_H

#include "mistura.h"

Elemento oxigenio{"O", 15.9994};
Elemento carbono{"C", 12.0107};
Elemento hidrogenio{"H", 1.00794};

Molecula gas_oxigenio{"O2", {oxigenio, oxigenio}, 3.47/2 * pow(10,-10)};
Molecula metano{"CH4", {carbono, hidrogenio, hidrogenio, hidrogenio}, 3.76/2 * pow(10,-10)};

#endif //PROJETO_ESPECIES_H
