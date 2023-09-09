#include <iostream>
#include <vector>
#include <algorithm> // Para usar la función sort
using namespace std;

int main() {
    vector<int> A = {10, 9, 3, 2, -1};

    int elemento_minimo = A[0];

    for(int i = 0; i < A.size(); i++){
        elemento_minimo = min(elemento_minimo, A[i]);
    }

    cout << elemento_minimo << '\n';

    return 0;
}
