#include <iostream>
#include "SerieAritmeticoGeometrica.h"
#include "../ValidarDatos.h"

int main() {
    double enesimoTermino;
    enesimoTermino = ValidarDatos::validarEntero("Ingrese el numero de terminos: ");
    SerieAritmeticoGeometrica serie(enesimoTermino);
    double resultado = serie.resolverSerie(1);
    std::cout << "El resultado de la serie aritmetico geometrica es: " << resultado << std::endl;
    return 0;
}