#include <iostream>
#include "../Model/TrianguloPascal.h"
#include "../Model/Validador.h"
using namespace std;

int main(){
    int filas;
    filas = Validador::validarNumeros("Ingrese el numero de filas del triangulo: ");

    TrianguloPascal::imprimir(filas,0);

    return 0;
}

