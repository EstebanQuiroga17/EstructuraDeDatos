

#include "SerieDeFibonacci.h"
#include <iostream>
using namespace std;

void SerieDeFibonacci::calcularSerie(int a, int b, int count)
{
   if (count < numeroDeTerminos) {
        cout << a << " ";
        calcularSerie(b, a + b, count + 1);
    }
}


SerieDeFibonacci::SerieDeFibonacci(int newNumeroDeTerminos)
   : numeroDeTerminos(newNumeroDeTerminos)
{
}

SerieDeFibonacci::~SerieDeFibonacci()
{
   // TODO : implement
}


int SerieDeFibonacci::getNumeroDeTerminos(void)
{
   return numeroDeTerminos;
}


void SerieDeFibonacci::setNumeroDeTerminos(int newNumeroDeTerminos)
{
   numeroDeTerminos = newNumeroDeTerminos;
}