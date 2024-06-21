#ifndef PROJETO_BASE_H
#define PROJETO_BASE_H

#include <iostream>

template<typename T> class BaseTemplate {
    T value;
public:
    // Construtores
    BaseTemplate();
    BaseTemplate(T value);

    // Modificadores
    T getValue() const;
    void setValue (T newValue);

    operator std::string() const;
};

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


template<typename T>
BaseTemplate<T>::operator std::string() const {
    return std::to_string(value);
}


class Base : public  BaseTemplate<double> {};
class BaseInt : public BaseTemplate<int> {};

#endif //PROJETO_BASE_H


