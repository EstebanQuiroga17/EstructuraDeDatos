#include "FechaPago.h"
#include "ValidacionesFecha.h"
#include <iostream>
using namespace std;

FechaPago::FechaPago() {}

bool FechaPago::esFeriado(int mes, int dia) {
    if ((mes == 1 && dia == 1) ||
        (mes == 5 && dia == 1) ||
        (mes == 8 && dia == 10) ||
        (mes == 10 && dia == 9) ||
        (mes == 11 && (dia == 2 || dia == 3)) ||
        (mes == 12 && dia == 25))
        return true;
    return false;
}

bool FechaPago::esFinDeSemana(int diaSemana) {
    return diaSemana == 0 || diaSemana == 1;
}

int FechaPago::obtenerDiaSemana(int anio, int mes, int dia) {
    int d = dia;
    int m = mes;
    int y = anio;

    if (m == 1 || m == 2) {
        m += 12;
        y -= 1;
    }

    int K = y % 100;
    int J = y / 100;
    int h = (d + (13 * (m + 1)) / 5 + K + (K / 4) + (J / 4) + (5 * J)) % 7;
    return h;
}

void FechaPago::calcularFechas() {
    int anio = 2025;
    ValidadorFecha validador;

    for (int mes = 1; mes <= 12; mes++) {
        int dia = 1;
        while (true) {
            if (!validador.esDia(dia, mes, anio)) break;
            int diaSemana = obtenerDiaSemana(anio, mes, dia);
            if (!esFeriado(mes, dia) && !esFinDeSemana(diaSemana)) {
                cout << "Mes " << mes << ": " << dia << "/" << mes << "/" << anio << endl;
                break;
            }
            dia++;
        }
    }
}
