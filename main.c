#include <stdio.h>
#include "Pitagoras/pitagoras.h"

int main() {
    printf("Tripletes pitagóricos hasta %d:\n", MAX);
    printf("%5s%5s%5s\n", "a", "b", "c");
    printf("---------------\n");

    int total = encontrar_tripletes(MAX);

    printf("\nSe encontraron %d tripletes pitagóricos.\n", total);
    return 0;
}