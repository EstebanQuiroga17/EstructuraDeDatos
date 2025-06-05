#include <iostream>
#include "IntegralPotencia.h"
#include "../ValidarDatos.h"

int main() {
    IntegralPotencia integral;
    double n;
    double k;

    n = ValidarDatos::validarDouble("Ingrese el valor de n: ");
    k = ValidarDatos::validarDouble("Ingrese el valor de k: ");

    integral.setDatos(n, k);
    std::cout << "Resultado de la integral: " << integral.resolver() << std::endl;

}
