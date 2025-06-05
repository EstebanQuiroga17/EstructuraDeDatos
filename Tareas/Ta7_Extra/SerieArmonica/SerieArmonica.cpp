#include "SerieArmonica.h"
#include <iostream>

using namespace std;

SerieArmonica::SerieArmonica(double enesimoTermino) 
: enesimoTermino(enesimoTermino) {}

double SerieArmonica::resolverSerie(int contador) {
    if(contador ==  enesimoTermino) {
        return 1.0 / contador;
    } else if (contador < enesimoTermino) {
        return 1.0 / contador + resolverSerie(contador + 1);
    } 
}

void SerieArmonica::setEnesimoTermino(double valor) {
    enesimoTermino = valor;
}

double SerieArmonica::getEnesimoTermino() const {
    return enesimoTermino;
}
