#pragma once

class Serie
{
public:
   int getN(void);
   void setN(int newN);
   Serie();
   ~Serie();
   int CalcularSumatoriaFormula(void);
   int CalcularSumatoria(void);
   int CalcularSumatoriaRecursividad(int param);

protected:
private:
   int n;


};

