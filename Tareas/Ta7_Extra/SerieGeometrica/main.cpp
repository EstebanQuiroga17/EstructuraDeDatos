#include <iostream>
#include "SerieGeometrica.h"
#include "../ValidarDatos.h"

int main() {
    double primerTermino, razon, enesimoTermino;
    primerTermino = ValidarDatos::validarDouble("Ingrese el primer termino: ");
    razon = ValidarDatos::validarDouble("Ingrese la razon: ");
    enesimoTermino = ValidarDatos::validarEntero("Ingrese el numero de terminos: ");
    SerieGeometrica serie(primerTermino, razon, enesimoTermino);
    double resultado = serie.resolverSerie(0);
    std::cout << "El resultado de la serie geometrica es: " << resultado << std::endl;
    return 0;
}