#include "base.h"

// Construtores
Base::Base() {
}
Base::Base(double x) {
    value = x;
}

// Modificadores
double Base::getValue() const {
    return value;
}
void Base::setValue(double newValue) {
    value = newValue;
}