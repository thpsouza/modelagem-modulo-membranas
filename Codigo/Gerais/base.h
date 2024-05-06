#ifndef CODIGO_BASE_H
#define CODIGO_BASE_H

/// Classe base para um valor
class Base {
    double value;
public:
    // Construtores
    Base();
    Base(double x);

    // Modificadores
    double getValue() const;
    void setValue(double newValue);
};

#endif //CODIGO_BASE_H
