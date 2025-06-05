#include <stdio.h>
#include "../model/validarDatos.h"

int main() {
    int dia, mes, anio;
    anio = ValidarDatos::validarNumeros("Ingresa el anio.");
    printf("%d", anio);
}