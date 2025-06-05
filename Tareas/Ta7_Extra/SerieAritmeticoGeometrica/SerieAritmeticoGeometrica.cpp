#include "SerieAritmeticoGeometrica.h"
#include <iostream>
#include <cmath>

using namespace std;

SerieAritmeticoGeometrica::SerieAritmeticoGeometrica(double enesimoTermino) 
: enesimoTermino(enesimoTermino) {}

double SerieAritmeticoGeometrica::resolverSerie(int contador) {
    if(contador ==  enesimoTermino) {
        return contador * pow(2, contador);
    } else if (contador < enesimoTermino) {
        return contador * pow(2, contador) + resolverSerie(contador + 1);
    } 
}

void SerieAritmeticoGeometrica::setEnesimoTermino(double valor) {
    enesimoTermino = valor;
}

double SerieAritmeticoGeometrica::getEnesimoTermino() const {
    return enesimoTermino;
}
