#include "Model/HanoiTower.h"
#include "Model/ValidarDatos.h"

int main() {
    int n;
    n = ValidarDatos::validarNumeros("Ingresa el numero de discos: ");

    HanoiTower hanoi(n);
    hanoi.solve();

    return 0;
}
