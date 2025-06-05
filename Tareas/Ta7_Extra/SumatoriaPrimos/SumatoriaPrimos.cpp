#include "SumatoriaPrimos.h"

int SumatoriaPrimos::contar(int* ptr) {
    if (*ptr == 0) return 0;

    int digito = *ptr % 10;
    *ptr /= 10;

    if (digito % 2 == 0)
        return 1 + contar(ptr);
    else
        return contar(ptr);
}
