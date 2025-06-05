#include "IntegralPotencia.h"
#include <cmath>

IntegralPotencia::IntegralPotencia() : n(0), k(0) {}

IntegralPotencia::~IntegralPotencia()
{
}

void IntegralPotencia::setDatos(double n, int k) {
    this->n = n;
    this->k = k;
}

double IntegralPotencia::resolver() {
    return (1.0 / (k + 1)) * pow(n, k + 1);
}
