# Link del Repositorio

https://github.com/junx21/Jun_PropuestaPrg

# Enunciados 

En este ejercicio de programación, se te pide que escribas un programa en C que identifique triples pitagóricos. Un triple pitagórico es un conjunto de tres números enteros positivos a, b y c, tal que a^2 + b^2 = c^2. Por simplicidad, nos centraremos en encontrar triples pitagóricos que representen los lados de un triángulo rectángulo.

Tu programa debe ser capaz de encontrar e imprimir los siguientes triples pitagóricos:

```cpp
- 3 - 4 - 5
- 6 - 8 - 10
- 5 - 12 - 13
- 8 - 15 - 17
```
Estructura sugerida para tu programa:

1. Utiliza un bucle para iterar a través de valores potenciales para el primer lado del triángulo (a).
2. Dentro de este bucle, utiliza un segundo bucle para iterar a través de valores potenciales para el segundo lado del triángulo (b).
3. Dentro del segundo bucle, calcula el tercer lado del triángulo (c) usando la fórmula c = sqrt(a^2 + b^2).
4. Verifica si los tres lados forman un triple pitagórico y si cumplen las condiciones de un triángulo (la suma de cualquier par de lados es mayor que el tercer lado).
5. Si se cumple, imprime el triple pitagórico.

# Implementación del Programa
```cpp
#include <stdio.h>
#include <math.h>

int main() {
    const int max = 20; // Puedes ajustar este valor según sea necesario
    int a, b, c;
    int count = 0;

    printf("Triples pitagóricos hasta %d:\n", max);
    printf("%5s%5s%5s\n", "a", "b", "c");
    printf("---------------\n");

    for (a = 1; a <= max; a++) { // Primer bucle
        for (b = a; b <= max; b++) { // Segundo bucle
            int c_squared = a * a + b * b;
            c = (int)sqrt((double)c_squared);
            
            // Verificar si c es un entero y dentro del rango
            if (c <= max && c * c == c_squared) {
                printf("%5d%5d%5d\n", a, b, c);
                count++;
            }
        }
    }

    printf("\nSe encontraron %d triples pitagóricos.\n", count);

    return 0;
}
```
