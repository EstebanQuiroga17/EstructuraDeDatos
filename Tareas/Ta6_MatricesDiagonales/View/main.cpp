#include <iostream>
#include "../Model/MatrixOperations.h"
#include "../Controller/IntMatrixOperations.cpp"

int main() {
    int n = 3;
    int** mat = new int*[n];
    for (int i = 0; i < n; ++i) {
        mat[i] = new int[n];
    }

    int val = 1;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            mat[i][j] = val++;

    std::cout << "Matriz:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            std::cout << mat[i][j] << " ";
        std::cout << std::endl;
    }

    IntMatrixOperations op(mat, n);
    char* diag = op.diagonal();
    char* secDiag = op.secondDiagonal();

    std::cout << "Diagonal principal: " << diag << std::endl;
    std::cout << "Diagonal secundaria: " << secDiag << std::endl;

    delete[] diag;
    delete[] secDiag;
    for (int i = 0; i < n; ++i)
        delete[] mat[i];
    delete[] mat;

    return 0;
}