#include <iostream>

// Función para realizar una búsqueda binaria en un arreglo ordenado
int busquedaBinaria(int arreglo[], int izquierda, int derecha, int elementoBuscado) {
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arreglo[medio] == elementoBuscado) {
            return medio; // Devuelve la posición del elemento si se encuentra
        }

        if (arreglo[medio] < elementoBuscado) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    return -1; // Devuelve -1 si el elemento no se encuentra en el arreglo
}

int main() {
    int arreglo[] = {5, 7, 8, 10, 15, 25};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
    int elementoBuscado = 15;

    int resultado = busquedaBinaria(arreglo, 0, tamano - 1, elementoBuscado);

    if (resultado != -1) {
        std::cout << "El elemento " << elementoBuscado << " se encuentra en la posición " << resultado << std::endl;
    } else {
        std::cout << "El elemento " << elementoBuscado << " no se encuentra en el arreglo." << std::endl;
    }

    return 0;
}
