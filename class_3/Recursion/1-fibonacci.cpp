#include <iostream>
#include <vector>
using namespace std;

vector<int> fib_memoria(100, -1);

// -1, -1, -1, ..., -1
// 100 veces

int fibonacci(int n) {
    cout << "Calculando el término " << n << " de la serie de Fibonacci" << endl;
    if(fib_memoria[n] != -1){
        return fib_memoria[n];
    }
    if (n <= 1) {
        return n;
    }
    fib_memoria[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fib_memoria[n];
}

// 30

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    cout << "El término " << n
         << " de la serie de Fibonacci es: " << fibonacci(n) << endl;

    return 0;
}

// 0 1 1 2 3 5 8 13 21...

// 3! = 3 * 2 * 1
// 5! = 5 * 4 * 3 * 2 * 1
// Hagan una funcion recursiva el cual calcule el n-esimo numero factorial
