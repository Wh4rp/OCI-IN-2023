#include <algorithm>  // Para usar la función sort
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector <int> v; // array dinamico -> [12222 -> 140000]
    // // vacio

    // v.push_back(1000);

    // cout << v[0] << '\n';

    // v.push_back(100);
    // v.push_back(10);
    // v.push_back(1);

    // cout << v.size() << '\n';

    int n;
    cin >> n;

    vector<int> vec(n);

    // v[0], v[1], v[2], ..., v[n-1]

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // // Acceso y salida de elementos
    cout << "Elementos del vector: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << '\n';

    // // Ordenar el vector
    sort(vec.begin(), vec.end());

    cout << "Vector ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // // Saber el tamaño del vector
    cout << "Tamaño del vector: " << vec.size() << endl;

    // Encontrar el valor máximo y mínimo
    int maxElement = *max_element(vec.begin(), vec.end());
    int minElement = *min_element(vec.begin(), vec.end());

    cout << "Valor máximo: " << maxElement << endl;
    cout << "Valor mínimo: " << minElement << endl;

    // // Calcular la suma de los elementos
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += vec[i];
    }
    cout << "Suma de elementos: " << sum << endl;

    return 0;
}
