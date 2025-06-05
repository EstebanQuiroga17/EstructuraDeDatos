#include "SerieDeFibonacci.h"
#include "../ValidarDatos.h"
#include <iostream>

using namespace std;

int main()
{
    int numeroDeTerminos;
    numeroDeTerminos = ValidarDatos::validarEntero("Ingrese el numero de terminos: ");

    SerieDeFibonacci serie(numeroDeTerminos);
    cout << "Serie de Fibonacci: " << endl;
    serie.calcularSerie();
    return 0;
}