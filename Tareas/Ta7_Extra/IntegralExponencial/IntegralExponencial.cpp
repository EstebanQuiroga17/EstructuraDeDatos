#include "IntegralExponencial.h"
#include <cmath>

IntegralExponencial::IntegralExponencial() : a(0), n(0) {}

IntegralExponencial::~IntegralExponencial()
{
}

void IntegralExponencial::setDatos(double a, double n) {
    this->a = a;
    this->n = n;
}

double IntegralExponencial::resolver() {
    return (1.0 / a) * (exp(a * n) - 1);
}
