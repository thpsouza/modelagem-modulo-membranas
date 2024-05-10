#include "base.h"

Base::Base() {
}

Base::Base(double x) {
    value = x;
}

double Base::getValue() const {
    return value;
}

void Base::setValue(double newValue) {
    value = newValue;
}
