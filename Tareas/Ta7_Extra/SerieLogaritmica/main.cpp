
#include <iostream>
#include "SerieLogaritmica.h"
using namespace std;

int main() {
    SerieLogaritmica serie;
    int n;
    double a;

    cout << "Ingrese el valor de n (n > 0): ";
    cin >> n;
    if (n <= 0) {
        cout << "Error: n debe ser mayor que 0." << endl;
        return 1;
    }

    cout << "Ingrese el valor de a: ";
    cin >> a;
    serie.setA(a);

    double resultado = serie.Calcular(n);
    cout << "El resultado de la serie logaritmica es: " << resultado << endl;

    return 0;
}