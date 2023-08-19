= Problema: Gestión de Frutas en el Carrito

Estás desarrollando una aplicación de gestión de compras en el supermercado en la que los usuarios pueden agregar, eliminar y listar frutas en su carrito. Debes implementar esta funcionalidad utilizando vectores dinámicos en C++.

== Input
Las operaciones se realizan mediante comandos. Cada línea de entrada contiene un comando seguido de sus parámetros (si los hay). Los comandos pueden ser los siguientes:

1. `"ADD"`: Agrega una nueva fruta al final del carrito.
   - El parámetro es el nombre de la fruta (una cadena sin espacios).

2. `"REMOVE"`: Elimina la última fruta del carrito.
   - No tiene parámetros.

3. `"LIST"`: Muestra todas las frutas en el carrito en orden de inserción.
   - No tiene parámetros.

4. `"EXIT"`: Termina la aplicación.
   - No tiene parámetros.

== Output
Para los comandos `"LIST"`, imprime en orden las frutas en el carrito, una por línea. Si no hay frutas en el carrito, imprime "El carrito está vacío".

== Ejemplo
**Input:**
```
ADD Manzana
ADD Plátano
LIST
REMOVE
LIST
ADD Uva
LIST
EXIT
```

**Output:**
```
Manzana
Plátano
Manzana
Manzana
Uva
```

**Nota:** Para manejar el tamaño dinámico del vector, asegúúrate de utilizar la función `push_back()` para agregar elementos y `pop_back()` para eliminar el último elemento.