#pragma once

class SerieAritmeticoGeometrica
{
public:
   SerieAritmeticoGeometrica(double enesimoTermino);  
   double resolverSerie(int);
    void setEnesimoTermino(double valor);
    double getEnesimoTermino() const;

protected:
private:
double enesimoTermino;
};