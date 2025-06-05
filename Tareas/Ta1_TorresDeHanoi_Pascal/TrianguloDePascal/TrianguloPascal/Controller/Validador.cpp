
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "../Model/Validador.h"



int Validador::validarNumeros(char msj[20])
{
  char c;
	int valor,i=0;
	char dato[10];
	printf("\nTEVS: %s",msj);
	while((c=getch())!=13){
		if(c>='0'&& c<='9'){
			dato[i++]=c;
			printf("%c",c);
		}
	}
	dato[i]='\0';
	valor=atoi(dato);
	printf("\n");
	return valor;
}

