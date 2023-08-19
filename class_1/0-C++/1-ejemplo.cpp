#include <bits/stdc++.h>
using namespace std;

int main() {
    // Tipo de dato int (entero)
    int num1 = 42;
    int num2 = 18;

    cout << num1 + num2 << endl;
    cout << 12 / 3 << endl;

    // Tipo de dato double (número decimal)
    double pi = 3.14159;

    cout << pi / 23 << endl;

    // char
    char caracter = 'a';

    cout << caracter << endl;

    // // Tipo de dato string (cadena de caracteres)
    string name = "Alice";
                // 01234
    cout << name + name << endl;

    cout << name[0] << endl;

    cout << name.substr(2, 3) << endl;

    // Tipo de dato bool (booleano)
    bool isStudent = false;

    // // Imprimir los valores de las variables
    cout << "Número 1: " << num1 << endl;
    cout << "Número 2: " << num2 << endl;
    cout << "Pi: " << pi << endl;
    cout << "Nombre: " << name << endl;

    if (name.substr(2, 3) == "aaaaa") {
        cout << "aaaaaaa" << endl;
    } else {
        cout << "No aaaaa" << endl;
    }

    // // Sumar dos números enteros
    // int sum = num1 + num2;
    // cout << "Suma de números: " << sum << endl;

    // // Usar un bucle for para imprimir los primeros 5 números pares
    cout << "Primeros 5 números pares: ";
    for (int i = 2; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
