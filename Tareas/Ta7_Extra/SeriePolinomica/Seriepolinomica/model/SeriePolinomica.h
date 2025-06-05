#pragma once
class SeriePolinomica
{
public:
   void ejecutar(void); 

protected:
private:
   int calcularSeriePolinomica(int n, int k);
   void pedirDatos(int& n, int& k); 
   void mostrarResultados(int resultado); 


};

