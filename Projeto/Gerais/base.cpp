#include "base.h"

template<typename T>
BaseTemplate<T>::BaseTemplate() {
}

template<typename T>
BaseTemplate<T>::BaseTemplate(T value) {
    BaseTemplate::value = value;
}

template<typename T>
T BaseTemplate<T>::getValue() const {
    return value;
}

template<typename T>
void BaseTemplate<T>::setValue(T newValue) {
    value = newValue;
}



