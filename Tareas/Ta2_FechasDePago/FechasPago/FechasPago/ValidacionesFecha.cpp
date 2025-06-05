#include "ValidacionesFecha.h"

bool ValidadorFecha::esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0);
}

bool ValidadorFecha::esMes(int mes) {
    return (mes >= 1 && mes <= 12);
}

bool ValidadorFecha::esDia(int dia, int mes, int anio) {
    if (dia < 1) return false;
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return dia <= 31;
        case 4: case 6: case 9: case 11:
            return dia <= 30;
        case 2:
            if (esBisiesto(anio)) return dia <= 29;
            else return dia <= 28;
        default:
            return false;
    }
}