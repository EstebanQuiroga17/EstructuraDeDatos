

#include "Serie.h"

int param = 0;
int result = 0;

int Serie::getN(void)
{
   return n;
}



void Serie::setN(int newN)
{
   n = newN;
}


Serie::Serie()
{
}


Serie::~Serie()
{
   // TODO : implement
}


int Serie::CalcularSumatoriaFormula(void){
   return n * (n + 1) / 2;
}

int Serie::CalcularSumatoria(void){
   int aux = 0;

   for (int i = 1; i <= n; i++){
      aux = aux + i;
   }
   return aux;
   
}

int Serie::CalcularSumatoriaRecursividad(int param) {
   if (param == 1) {
      return 1; 
   } else {
      return param + CalcularSumatoriaRecursividad(param - 1); 
   }
}

