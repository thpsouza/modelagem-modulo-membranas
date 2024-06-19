#ifndef PROJETO_BASE_H
#define PROJETO_BASE_H

template<typename T> class BaseTemplate {
    T value;
public:
    // Construtores
    BaseTemplate();
    BaseTemplate(T value);

    // Modificadores
    T getValue() const;
    void setValue (T newValue);
};

class Base : public BaseTemplate<double> {};


#endif //PROJETO_BASE_H


