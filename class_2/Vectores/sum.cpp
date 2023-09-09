#include <iostream>
#include <vector>
#include <algorithm> // Para usar la función sort
using namespace std;

int main() {
    vector<int> A = {10, 9, 3, 2, -1};

    int suma = 0;

    for(int i = 0; i < A.size(); i++){
        suma += A[i];
    }

    cout << suma << '\n';

    return 0;
}
