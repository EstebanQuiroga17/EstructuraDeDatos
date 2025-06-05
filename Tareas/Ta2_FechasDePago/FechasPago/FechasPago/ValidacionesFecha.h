#ifndef VALIDACIONES_FECHA_H
#define VALIDACIONES_FECHA_H

class ValidadorFecha {
public:
    bool esBisiesto(int anio);
    bool esMes(int mes);
    bool esDia(int dia, int mes, int anio);
};

#endif