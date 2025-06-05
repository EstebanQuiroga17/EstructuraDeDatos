#include "TrianguloPascal.h"
#include "../ValidarDatos.h"
#include <iostream>
using namespace std;

void TrianguloPascal::ejecutar() {
    int filas;
    filas = ValidarDatos::validarEntero("Ingrese el número de filas: ");

    for (int n = 0; n < filas; ++n) {
        for (int i = 0; i < filas - n - 1; ++i) {
            cout << " ";
        }

        for (int k = 0; k <= n; ++k) {
            cout << calcularValor(n, k) << " ";
        }

        cout << endl;
    }
}

int TrianguloPascal::calcularValor(int fila, int columna) {
    if (columna == 0 || columna == fila) {
        return 1;
    }

    return calcularValor(fila - 1, columna - 1) + calcularValor(fila - 1, columna);
}
