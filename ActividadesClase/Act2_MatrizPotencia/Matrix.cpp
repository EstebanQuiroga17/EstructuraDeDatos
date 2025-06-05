#include <stdio.h>
#include <cstdlib>
#include "Matrix.h"
#include "ValidarDatos.h"



void Matrix::print(void)
{
    int i,j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d", matrix[i][j]);
            printf("  ");
        }
        printf("\n\n");
    }

}



Matrix::Matrix(int newRows, int newColumns)
{
    rows = newRows;
    columns = newColumns;
    int i;
    matrix = (int **) malloc(rows * sizeof(int*));

    for(i = 0; i<rows;i++){
        matrix[i] = (int *)malloc(columns * sizeof(int));
    }
}

void Matrix::fillMatrix()
{
    int i,j;
    for(i = 0; i<getRows(); i++){
        for (j=0; j<getColumns();j++){
            printf("En [%d][%d]",i,j);
            matrix[i][j] = ValidarDatos::validarNumeros("Ingrese el valor: ");
        }
    }

}

Matrix::~Matrix()
{
   int i;
    for(i = 0; i<getRows(); i++){
        free(matrix[i]);
        }
    free(matrix);
}


int Matrix::getRows(void)
{
   return rows;
}



void Matrix::setRows(int newRows)
{
   rows = newRows;
}

int Matrix::getColumns(void)
{
   return columns;
}



void Matrix::setColumns(int newCollumns)
{
   columns = newCollumns;
}

void Matrix::setMatrix(Matrix newMatrix)
{
    int i,j;
    for(i=0;i<getRows();i++){
        for(j=0;j<getColumns();j++){
            matrix[i][j]=newMatrix.getMatrix()[i][j];
        }
    }
}

int** Matrix::getMatrix(void)
{
    return matrix;
}

Matrix Matrix::multiply(Matrix other) {
    if (columns != other.getRows()) {
        printf("Error: dimensiones incompatibles para multiplicación.\n");
        exit(1);
    }

    Matrix result(rows, other.getColumns());

    for (int i = 0; i < result.getRows(); i++) {
        for (int j = 0; j < result.getColumns(); j++) {
            result.getMatrix()[i][j] = 0;
            for (int k = 0; k < columns; k++) {
                result.getMatrix()[i][j] += matrix[i][k] * other.getMatrix()[k][j];
            }
        }
    }

    return result;
}

Matrix Matrix::power(int exponent) {
    if (rows != columns) {
        printf("Error: solo se puede elevar matrices cuadradas.\n");
        exit(1);
    }

    Matrix result(rows, columns);
    Matrix base(rows, columns);
    base.setMatrix(*this);  

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            result.getMatrix()[i][j] = (i == j) ? 1 : 0;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = result.multiply(base);
        }
        base = base.multiply(base);
        exponent /= 2;
    }

    return result;
}




