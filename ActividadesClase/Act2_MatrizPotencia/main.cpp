#include <iostream>
#include "Matrix.h"

int main() {
    int n, exp;

    std::cout << "Ingrese el tamaño de la matriz cuadrada: ";
    std::cin >> n;

    Matrix A(n, n);
    std::cout << "Llenado de la matriz A:\n";
    A.fillMatrix();

    std::cout << "\nMatriz ingresada A:\n";
    A.print();

    std::cout << "\nIngrese la potencia a la que desea elevar la matriz: ";
    std::cin >> exp;

    Matrix A_pow = A.power(exp);

    std::cout << "\nMatriz A elevada a la potencia " << exp << ":\n";
    A_pow.print();

    return 0;
}
