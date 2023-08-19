#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int arr1D[3] = {100, -222, 333333};

    // for (int i = 0; i < rows; i++) {
    //     cin >> arr1D[i];
    // }

    for (int i = 0; i < rows; i++) {
        cout << arr1D[i];
        cout << endl;
    }
    
    int indice, valor;

    cout << "Ingresa un indice para modificar: ";
    cin >> indice;

    cout << "Ingresa valor: ";
    cin >> valor;
    
    arr1D[indice] = valor;

    cout << "ARRAY FINAL" << endl;

    for (int i = 0; i < rows; i++) {
        cout << arr1D[i];
        cout << endl;
    }

    return 0;
}
