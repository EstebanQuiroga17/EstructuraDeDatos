#pragma once

class SerieArmonica
{
public:
   SerieArmonica(double enesimoTermino);  
   double resolverSerie(int contador);
    void setEnesimoTermino(double valor);
    double getEnesimoTermino() const;

protected:
private:
double enesimoTermino;
};