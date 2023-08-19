#include <iostream>
#include <string>
using namespace std;

int main() {
    // Tipo de dato int (entero)
    int num1 = 42;
    int num2 = 18;

    // Tipo de dato double (número decimal)
    double pi = 3.14159;

    // Tipo de dato string (cadena de caracteres)
    string name = "Alice";

    // Tipo de dato bool (booleano)
    bool isStudent = true;

    // Imprimir los valores de las variables
    cout << "Número 1: " << num1 << endl;
    cout << "Número 2: " << num2 << endl;
    cout << "Pi: " << pi << endl;
    cout << "Nombre: " << name << endl;

    if (isStudent) {
        cout << "Es estudiante." << endl;
    } else {
        cout << "No es estudiante." << endl;
    }

    // Sumar dos números enteros
    int sum = num1 + num2;
    cout << "Suma de números: " << sum << endl;

    // Usar un bucle for para imprimir los primeros 5 números pares
    cout << "Primeros 5 números pares: ";
    for (int i = 2; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
