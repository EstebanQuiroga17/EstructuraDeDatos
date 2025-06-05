

#if !defined(__MatrixDiagonal_Matrix_h)
#define __MatrixDiagonal_Matrix_h

#include "MatrixOperations.h"

class Matrix : public MatrixOperations
{
public:
   void print(void);
   Matrix(int rows, int columns);
   ~Matrix();
   int getRows(void);
   void setRows(int newRows);
   int getColumns(void);
   void setColumns(int newColumns);
   int** getMatrix(void);
   void setMatrix(int** newMatrix);
   void fillMatrix(void);

protected:
private:
   int rows;
   int columns;
   int** matrix;


};

#endif