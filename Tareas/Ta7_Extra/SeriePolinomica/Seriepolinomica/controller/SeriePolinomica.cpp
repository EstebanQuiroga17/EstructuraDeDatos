
#include "../Model/SeriePolinomica.h"
#include <iostream>
#include <cmath>
using namespace std;


void SeriePolinomica::ejecutar(void)
{
   int n, k;
   pedirDatos(n, k);
   int resultado = calcularSeriePolinomica(n, k);
   mostrarResultados(resultado);
}


int SeriePolinomica::calcularSeriePolinomica(int n, int k)
{

   if (n == 0) {
      return 0; 
  }
  return potencia(n, k) + calcularSeriePolinomica(n - 1, k); 
}


void SeriePolinomica::pedirDatos(int& n, int& k)
{
   cout << "Ingrese el valor de n (hasta donde se suma): ";
   cin >> n;
   cout << "Ingrese el valor de k (potencia de cada i): ";
   cin >> k;
}


void SeriePolinomica::mostrarResultados(int resultado)
{
   cout << "El resultado de la serie polinómica es: " << resultado << endl;
}

int SeriePolinomica::potencia(int base, int exponente) {
   int resultado = 1;
   for (int i = 0; i < exponente; ++i) {
       resultado *= base;
   }
   return resultado;
}
