#include "SerieGeometrica.h"
#include <cmath>

SerieGeometrica::SerieGeometrica(double primerTermino, double razon, double enesimoTermino)
: primerTermino(primerTermino), razon(razon), enesimoTermino(enesimoTermino){}

double SerieGeometrica::multiplicar(int exponente)
{
    return primerTermino * pow(razon, exponente);
}    

double SerieGeometrica::resolverSerie(int exponente)
{
    if(exponente == enesimoTermino){
        return multiplicar(exponente);
    } else {
        return multiplicar(exponente) + resolverSerie(exponente + 1);
    }
    
}

void SerieGeometrica::setPrimerTermino(double valor) {
    primerTermino = valor;
}

void SerieGeometrica::setRazon(double valor) {
    razon = valor;
}

void SerieGeometrica::setEnesimoTermino(double valor) {
    enesimoTermino = valor;
}

// Getters
double SerieGeometrica::getPrimerTermino() const {
    return primerTermino;
}

double SerieGeometrica::getRazon() const {
    return razon;
}

double SerieGeometrica::getEnesimoTermino() const {
    return enesimoTermino;
}