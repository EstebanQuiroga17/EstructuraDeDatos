

#if !defined(__MatrizPunteros_Matrix_h)
#define __MatrizPunteros_Matrix_h

class Matrix
{

public:
   void print(void);
   Matrix(int newRows, int newColumns);
   void fillMatrix(void);
   ~Matrix();
   int getRows(void);
   void setRows(int newRows);
   int getColumns(void);
   void setColumns(int newColumns);
   int** getMatrix(void);
   void setMatrix(Matrix newMatrix);

protected:
private:
   int rows;
   int columns;
   int** matrix;


};

#endif
