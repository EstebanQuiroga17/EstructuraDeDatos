#include <iostream>
#include "../Model/Matrix.h"
#include "../Model/Operation.h"

using namespace std;

int main()
{
    Matrix matrixA(2,2);
    matrixA.fillMatrix();
    matrixA.print();

    Matrix matrixB(2,2);
    matrixB.fillMatrix();
    matrixB.print();

    Matrix matrixC = Operation::add(matrixA,matrixB);
    printf("La suma de las matrices es: \n");
    matrixC.print();
}
