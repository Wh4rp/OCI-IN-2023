#include <iostream>
#include <vector>
#include <algorithm> // Para usar la función sort
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Acceso y salida de elementos
    cout << "Elementos del vector: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Ordenar el vector
    sort(vec.begin(), vec.end());

    cout << "Vector ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Saber el tamaño del vector
    cout << "Tamaño del vector: " << vec.size() << endl;

    // Encontrar el valor máximo y mínimo
    int maxElement = *max_element(vec.begin(), vec.end());
    int minElement = *min_element(vec.begin(), vec.end());

    cout << "Valor máximo: " << maxElement << endl;
    cout << "Valor mínimo: " << minElement << endl;

    // Calcular la suma de los elementos
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += vec[i];
    }
    cout << "Suma de elementos: " << sum << endl;

    return 0;
}
