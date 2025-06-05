#include <iostream>
#include "../Model/TrianguloPascal.h"
using namespace std;



int TrianguloPascal::binomioNewton(int n, int k)
{
   if (k == 0 || k == n)
        return 1;
    return binomioNewton(n - 1, k - 1) + binomioNewton(n - 1, k);
}



void TrianguloPascal::imprimir(int nivel, int fila)
{
   if (fila == nivel)
        return;

    for (int i = 0; i <= fila; i++) {
        cout << binomioNewton(fila, i) << " ";
    }
    cout << endl;

    imprimir(nivel, fila + 1);
}
