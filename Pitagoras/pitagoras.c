#include <stdio.h>
#include <math.h>
#include "pitagoras.h"

static int es_triplete_pitagorico(int a, int b, int c) {
    return (a*a + b*b == c*c);
}

static void imprimir_triplete(int a, int b, int c) {
    printf("%5d%5d%5d\n", a, b, c);
}

int encontrar_tripletes(int max) {
    int count = 0;
    for (int a = 1; a <= max; a++) {
        for (int b = a; b <= max; b++) {
            int c = (int)sqrt((double)(a*a + b*b));
            if (c <= max && es_triplete_pitagorico(a, b, c)) {
                imprimir_triplete(a, b, c);
                count++;
            }
        }
    }
    return count;
}