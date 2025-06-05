#include <stdio.h>
#include <cstdlib>
#include "../Model/Matrix.h"
#include "../Model/ValidarDatos.h"



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



