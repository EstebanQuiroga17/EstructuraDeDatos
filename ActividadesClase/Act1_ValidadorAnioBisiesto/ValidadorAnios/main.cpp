#include <stdio.h>
#include "../model/validarDatos.h"
#include "../model/Anio.h"
#include "../model/Fecha.h"

int main() {
    int dia, mes, diasDelMes, valorAnio;


    valorAnio = ValidarDatos::validarNumeros("Ingresa el anio.");
    Anio anio(valorAnio);

    mes = ValidarDatos::validarNumeros("Ingresa el mes: ");
    while(mes<1 || mes>12){
        mes = ValidarDatos::validarNumeros("Solo se aceptan numeros del 1-12: ");
    }

    diasDelMes = ValidarDatos::validarMes(mes, anio.getAnio());

    dia = ValidarDatos::validarNumeros("Ingresa el dia.");

    while(ValidarDatos::validarDia(dia, diasDelMes) == false){
        printf("No existe el dia %d en ese mes.", dia);
        dia = ValidarDatos::validarNumeros("Elige otro dia: ");
    }

    Fecha fecha(anio, mes, dia);
    fecha.imprimir();

    Fecha diaSiguiente = fecha.siguienteDia(diasDelMes);
    diaSiguiente.imprimir();

}
