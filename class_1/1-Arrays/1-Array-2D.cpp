#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 4;
    int arr2D[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr2D[i][j];
        }
    }

    // Acceso y salida de elementos
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
