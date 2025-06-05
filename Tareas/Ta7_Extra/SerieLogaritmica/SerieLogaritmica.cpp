#include "SerieLogaritmica.h"
#include <cmath>  

double SerieLogaritmica::sumatoriaLog(int n)
{
   if (n == 1)
        return log10(1);  
    else
        return log10(n) + sumatoriaLog(n - 1);
}

double SerieLogaritmica::Calcular(int n)
{
   return a * sumatoriaLog(n);
}

double SerieLogaritmica::getA(void)
{
   return a;
}

void SerieLogaritmica::setA(double newA)
{
   a = newA;
}

SerieLogaritmica::SerieLogaritmica()
{
}

SerieLogaritmica::~SerieLogaritmica()
{
   // TODO : implement
}