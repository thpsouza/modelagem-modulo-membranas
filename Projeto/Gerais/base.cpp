#include "base.h"

Base::Base() {
}

Base::Base(double value) {
    Base::value = value;
}

double Base::getValue() const {
    return value;
}

void Base::setValue(double newValue) {
    value = newValue;
}
