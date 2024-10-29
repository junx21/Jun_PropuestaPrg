#include <stdio.h>
#include <math.h>

int main() {
    const int max = 20;
    int a, b, c;
    int count = 0;

    printf("Tripletes pitagóricos hasta %d:\n", max);
    printf("%5s%5s%5s\n", "a", "b", "c");
    printf("---------------\n");

    for (a = 1; a <= max; a++) {
        for (b = a; b <= max; b++) {
            int c_squared = a * a + b * b;
            c = (int)sqrt((double)c_squared);

            if (c <= max && c * c == c_squared) {
                printf("%5d%5d%5d\n", a, b, c);
                count++;
            }
        }
    }

    printf("\nSe encontraron %d tripletes pitagóricos.\n", count);

    return 0;
}