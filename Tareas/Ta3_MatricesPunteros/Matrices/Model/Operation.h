
#if !defined(__MatrizPunteros_Operation_h)
#define __MatrizPunteros_Operation_h

#include "Matrix.h"

class Operation
{
public:
   static Matrix add(Matrix& addend1, Matrix& addend2);
   static bool compareDimension(Matrix matrixA, Matrix matrixB);
   static Matrix sizeMatrix(Matrix matrixA, Matrix matrixB);

protected:
private:

};

#endif
