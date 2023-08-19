#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 2;
    string arr2D[rows][cols] = {
        {"00", "01"},
        {"10", "11"},
        {"20", "21"},
    };

    // Acceso y salida de elementos
    for (int i = 0; i < rows; i++) {
        // i -> 0, 1, 2
        for (int j = 0; j < cols; j++) {
            // j -> 0, 1
            cout << arr2D[i][j] << " ";
            // arr2D[0][0] <-> 00
            // arr2D[0][1] <-> 01
        }
        cout << endl;
    }

    int filas, columnas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    char arr2D2[filas][columnas];

    cout << "Ingrese los elementos:" << endl;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> arr2D2[i][j];
        }
        cout << "Leida fila " << i << endl;
    }

    int fila_consultar, columna_consultar;
    cout << "Ingresa consula (fila columna): ";
    cin >> fila_consultar >> columna_consultar;

    cout << "valor: " << arr2D2[fila_consultar][columna_consultar] << endl;

    return 0;
}
