
#include <iostream>
using namespace std;

int main() {
    int filas, columnas, pisos;
    int arr3D[filas][columnas][pisos];

    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;
    cout << "Ingrese el número de pisos: ";
    cin >> pisos;

    for (int k = 0; k < pisos; k++) {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                cin >> arr3D[i][j][k];
            }
        }
    }

    int cantidad_alumnos = 0;

    for (int k = 0; k < pisos; k++) {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                cout << arr3D[filas][columnas][pisos] << " ";
                if (arr3D[filas][columnas][pisos] == 1) {
                    cantidad_alumnos++;
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    cout << cantidad_alumnos << endl;
    return 0;
}