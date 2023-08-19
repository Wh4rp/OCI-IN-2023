= Estudiantes en el Aula 3D

En una escuela, en un edificio con $z$ pisos hay una aula por cada nivel. Cada aula tiene $x$ filas y $y$ columnas de asientos. Cada asiento puede estar vacío o contener un estudiante. Tienes que contar el número total de estudiantes en el edificio.

== Constrains
- Las dimensiones son: $x$ (cantidad filas), $y$ (cantidad columnas) y $z$ (cantidad pisos) ($1 <= x, y$, $z <= 100$).
- Cada elemento de la matriz es $0$ (aula vacía) o $1$ (aula con un estudiante).

== Input
La primera línea contiene las dimensiones separados por un espacio $x$, $y$ y $z$.
Luego siguen $x dot z$ líneas son las filas de cada aula. Cada fila tiene $y$ elementos separados por un espacio.

== Output
Imprime un solo entero: el número total de estudiantes en el edificio.

== Ejemplo 1
**Input:**
```
2 2 2
1 0
0 1
1 1
0 0
```

**Output:**
```
4
```

== Ejemplo 2
**Input:**
```
2 3 2
1 0 1
0 1 0
1 1 1
0 0 0
```

**Output:**
```
6
```