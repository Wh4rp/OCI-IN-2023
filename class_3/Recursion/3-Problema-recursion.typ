== Problema: Lucas y su Recursión Especial

Lucas, un apasionado por la matemática, ha inventado su propia secuencia llamada "Secuencia de Lucas". Esta secuencia sigue una lógica muy especial: cada término de la secuencia se forma a partir de una combinación de los términos anteriores. La secuencia se define de la siguiente manera:

$ cal(L)(n) = cal(L)(n-1) star cal(L)(n-2) star cal(L)(n-3) $

Donde $cal(L)(n)$ es el $n$-ésimo término de la secuencia de Lucas, $star$ es una operación (producto o suma) proporcionada por Lucas.

Tu tarea es calcular el cal(L)(n) de la secuencia de Lucas, dado el valor de n, los primeros 3 términos de la secuencia proporcionados por Lucas y la operación $star$.

== Input
La primera línea contiene dos enteros separados por espacio: n (1 <= n <= 20), donde n es el término que se desea calcular.
La segunda línea contiene 3 enteros separados por espacio: los primeros 3 términos de la secuencia de Lucas proporcionados por Lucas.
La tercera línea contiene una letra 'P' o 'S', que indica si la operación es producto o suma, respectivamente.

== Output
Imprime un solo entero: el $n$-ésimo término de la secuencia de Lucas.

== Ejemplo
**Input:**
```
5
2 3 4
P
```

**Output:**
```
288
```

=== Explicación
En este ejemplo, se nos proporciona que los primeros 3 términos de la secuencia de Lucas son 2, 3 y 4, respectivamente. La operación proporcionada por Lucas es el producto ('P'). Queremos calcular el quinto término de la secuencia, es decir, $cal(L)(5)$.

Siguiendo la definición de la secuencia de Lucas y la operación de producto, calculamos:

$ cal(L)(5) = cal(L)(4) times cal(L)(3) times cal(L)(2) $

Dado que $cal(L)(4) = cal(L)(3) times cal(L)(2) times cal(L)(1) = 4 times 3 times 2 = 24$. Por lo tanto, $cal(L)(5) = 24 times 3 times 2 = 288$.