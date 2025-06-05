#include <iostream>
#include "Serie.h"
using namespace std;

int main() {
    Serie serie;
    int numero;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    serie.setN(numero);
    int resultado = serie.CalcularSumatoriaFormula();
    int result = serie.CalcularSumatoria();
    int resultadoRecursivo = serie.CalcularSumatoriaRecursividad(numero);


    cout << "La suma de los enteros del 1 al " << numero << " por formula es: " << resultado << endl;

    cout << "\n La suma de los enteros del 1 al " << numero << "por sumatoria es: " << result << endl;

    cout << "\nLa suma de los enteros del 1 al " << numero << " por recursividad es: " << resultadoRecursivo << endl;

    return 0;
}