#ifndef FECHA_PAGO_H
#define FECHA_PAGO_H

class FechaPago {
public:
    FechaPago();
    void calcularFechas();
private:
    bool esFeriado(int mes, int dia);
    bool esFinDeSemana(int diaSemana);
    int obtenerDiaSemana(int anio, int mes, int dia);
};

#endif
