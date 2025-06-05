
#include "../Model/Matrix.h"

void Matrix::print(void)
{
}

Matrix::Matrix(int rows, int columns)
{
}

Matrix::~Matrix()
{
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

void Matrix::setColumns(int newColumns)
{
   columns = newColumns;
}


int** Matrix::getMatrix(void)
{
   return matrix;
}


void Matrix::setMatrix(int** newMatrix)
{
   matrix = newMatrix;
}


void Matrix::fillMatrix(void)
{
   // TODO : implement
}