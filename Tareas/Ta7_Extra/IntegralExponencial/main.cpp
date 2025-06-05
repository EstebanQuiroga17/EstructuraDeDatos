#include <iostream>
#include "IntegralExponencial.h"
#include "../ValidarDatos.h"

int main() {
    IntegralExponencial integral;
    double a, n;

    a = ValidarDatos::validarDouble("Ingrese de a: ");
    n = ValidarDatos::validarDouble("Ingrese n: ");

    integral.setDatos(a, n);
    std::cout << "Resultado de la integral: " << integral.resolver() << std::endl;

    return 0;
}
