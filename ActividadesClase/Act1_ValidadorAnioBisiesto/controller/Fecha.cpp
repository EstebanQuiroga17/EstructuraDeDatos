
#include "../model/Fecha.h"
#include "../model/Anio.h"
#include <stdio.h>



int Fecha::getDia(void)
{
   return dia;
}


void Fecha::setDia(int newDia)
{
   dia = newDia;
}

int Fecha::getMes(void)
{
   return mes;
}



void Fecha::setMes(int newMes)
{
   mes = newMes;
}


Anio Fecha::getAnio(void)
{
   return anio;
}

void Fecha::setAnio(Anio newAnio)
{
   anio = newAnio;
}

Fecha Fecha::siguienteDia(int diasDelMes)
{
    int diaSiguiente;
    int mesSiguiente = mes;
    int valorAnio;

    if(dia == diasDelMes){
        diaSiguiente = 1;
        mesSiguiente = mes + 1;
    } else{diaSiguiente = dia +1;}

    if(mes == 12 && dia == diasDelMes)
    {
        valorAnio = anio.getAnio() + 1;
        mesSiguiente = 1;
    }else{valorAnio = anio.getAnio();}

    Anio anioSiguiente(valorAnio);
    Fecha siguienteFecha(anioSiguiente, mesSiguiente, diaSiguiente);
    return siguienteFecha;
}

void Fecha::imprimir(){
    printf("La fecha escogida es: %d/%d/%d", dia, mes, anio.getAnio());
    printf("\n");
}

Fecha::Fecha(Anio newAnio, int newMes, int newDia)
{
    dia = newDia;
    mes = newMes;
    anio = newAnio;
}

Fecha::~Fecha()
{
   // TODO : implement
}
