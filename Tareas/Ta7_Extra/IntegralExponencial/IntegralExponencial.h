#ifndef INTEGRALEXPONENCIAL_H
#define INTEGRALEXPONENCIAL_H

class IntegralExponencial {
private:
    double a, n;
public:
    IntegralExponencial();
    ~IntegralExponencial();
    void setDatos(double, double);
    double resolver();
};

#endif
