#ifndef PROJETO_BASE_H
#define PROJETO_BASE_H


class Base {
    double value;
public:
    // Construtores
    Base();
    Base(double x);

    // Modificadores
    double getValue() const;
    void setValue (double newValue);
};


#endif //PROJETO_BASE_H
