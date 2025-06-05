#include <iostream>
#include "SerieArmonica.h"
#include "../ValidarDatos.h"

int main() {
    double enesimoTermino;
    enesimoTermino = ValidarDatos::validarEntero("Ingrese el numero de terminos: ");
    SerieArmonica serie(enesimoTermino);
    double resultado = serie.resolverSerie(1);
    std::cout << "El resultado de la serie armonica es: " << resultado << std::endl;
    return 0;
}