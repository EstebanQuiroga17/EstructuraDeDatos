#pragma once

class SerieGeometrica
{
public:
   SerieGeometrica(double primerTermino, double razon, double enesimoTermino);  
   double multiplicar(int exponente);
   double resolverSerie(int);
    void setPrimerTermino(double valor);
    void setRazon(double valor);
    void setEnesimoTermino(double valor);
    double getPrimerTermino() const;
    double getRazon() const;
    double getEnesimoTermino() const;

protected:
private:
double primerTermino;
double razon;
double enesimoTermino;
};
