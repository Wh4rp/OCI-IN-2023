#include <iostream>

// Función para realizar una búsqueda lineal en un arreglo
int busquedaLineal(int arreglo[], int tamano, int elementoBuscado) {
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] == elementoBuscado) {
            return i; // Devuelve la posición del elemento si se encuentra
        }
    }
    return -1; // Devuelve -1 si el elemento no se encuentra en el arreglo
}

int main() {
    int arreglo[] = {10, 25, 5, 8, 15, 7};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
    int elementoBuscado = 15;

    int resultado = busquedaLineal(arreglo, tamano, elementoBuscado);

    if (resultado != -1) {
        std::cout << "El elemento " << elementoBuscado << " se encuentra en la posición " << resultado << std::endl;
    } else {
        std::cout << "El elemento " << elementoBuscado << " no se encuentra en el arreglo." << std::endl;
    }

    return 0;
}
