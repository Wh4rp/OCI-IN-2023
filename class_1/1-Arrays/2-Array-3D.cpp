#include <iostream>
using namespace std;

int main() {
    int x = 2, y = 3, z = 4;
    int arr3D[x][y][z];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cin >> arr3D[i][j][k];
            }
        }
    }

    // Acceso y salida de elementos
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << arr3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
