#include <iostream>
#include "../Model/Funcion.h"

int main(){
    Funcion::sumar(2, 3);
    std::cout << "La suma es: " << Funcion::sumar(2, 3) << std::endl;
}