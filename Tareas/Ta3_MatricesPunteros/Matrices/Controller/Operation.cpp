#include <stdio.h>
#include "../Model/Operation.h"
#include "../Model/Matrix.h"

Matrix Operation::add(Matrix& addend1, Matrix& addend2)
{
    int i,j;
    int rows = addend1.getRows();
    int columns =  addend1.getColumns();
    Matrix transitionMatrix(rows, columns);
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            transitionMatrix.getMatrix()[i][j]= addend1.getMatrix()[i][j] + addend2.getMatrix()[i][j];
        }
    }
    return transitionMatrix;
}

bool Operation::compareDimension(Matrix matrixA, Matrix matrixB)
{
    int dimensionA = matrixA.getColumns() * matrixA.getRows();
    int dimensionB = matrixB.getColumns() * matrixB.getRows();

    if(dimensionA>dimensionB)
        return true;
    else
        return false;
}

Matrix Operation::sizeMatrix(Matrix matrixA, Matrix matrixB)
{
    int cRows, cColumns;
    if(Operation::compareDimension(matrixA, matrixB)){
        cRows = matrixA.getRows();
        cColumns = matrixA.getColumns();
    } else {
        cRows = matrixB.getRows();
        cColumns = matrixB.getColumns();
    }

    Matrix matrixC(cRows, cColumns);
    return matrixC;
}
