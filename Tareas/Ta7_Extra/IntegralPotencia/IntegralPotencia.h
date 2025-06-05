#ifndef INTEGRALPOTENCIA_H
#define INTEGRALPOTENCIA_H

class IntegralPotencia {
private:
    double n;
    int k;
public:
    IntegralPotencia();
    ~IntegralPotencia();
    void setDatos(double, int);
    double resolver();
};

#endif