#include <iostream>
#include "SumatoriaPrimos.h"
using namespace std;

int main() {
    int entrada;
    cout << "Ingrese un numero positivo: ";
    cin >> entrada;

    if (entrada < 0) {
        cout << "Error: El número debe ser positivo." << endl;
        return 1;
    }

    int* ptr = new int(entrada);

    SumatoriaPrimos contador;
    int cantidadPares = contador.contar(ptr);

    delete ptr;

    cout << "El numero tiene " << cantidadPares << " digitos pares." << endl;

    return 0;
}
