#include <iostream>
#include <vector>
#include <algorithm> // Para usar la función sort
using namespace std;

int main() {
    vector<int> A = {10, 9, 3, 2, -1};

    // <--------------------0-------------------->
    //      -222                10

    int elemento_minimo = A[0];

    for(int i = 0; i < A.size(); i++){
        // A[i]:= elemento i-esimo del vector A
        cout << "Estoy viendo el elemento: " << A[i] << endl;
        if(A[i] < elemento_minimo){
            cout << "Estoy actualizando el elemento minimo" << endl;
            cout << "Antes: " << elemento_minimo << endl;
            elemento_minimo = A[i];
            cout << "Despues: " << elemento_minimo << endl;
        }
    }

    cout << "Elemento minimo: " << elemento_minimo << endl;

    return 0;
}
