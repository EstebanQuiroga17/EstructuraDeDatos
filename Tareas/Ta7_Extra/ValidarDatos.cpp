#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "ValidarDatos.h"


int ValidarDatos::validarEntero(char msj[20]){
	char c;
	int valor,i=0;
	char* dato =  new char[10]; 
	printf("\nTEVS: %s",msj);
	while((c=getch())!=13){
		if(c>='0'&& c<='9'){
			*(dato + i++)=c;
			printf("%c",c);
		}
	}
	*(dato + i)='\0';
	valor=atoi(dato);
	printf("\n");
	delete[] dato; 
	return valor;
}

double ValidarDatos::validarDouble(char msj[20]){
	char c;
    bool puntoUsado = false;
	int valor,i=0;
	char* dato =  new char[10];
	printf("\nTEVS: %s",msj);
	while((c=getch())!=13){
        if(c == '.' && !puntoUsado) {
            *(dato + i++)=c;
            puntoUsado = true; 
            printf("%c", c);
        } else
		if(c>='0'&& c<='9'){
			dato[i++]=c;
			printf("%c",c);
		}
	}
	*(dato + i)='\0';
	valor=atoi(dato);
	printf("\n");
	delete[] dato;
	return valor;
}