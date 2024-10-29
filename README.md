# Link del Repositorio

https://github.com/junx21/Jun_PropuestaInformatica

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
