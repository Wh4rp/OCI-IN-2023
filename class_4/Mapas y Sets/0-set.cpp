#include<iostream>
#include<set>
using namespace std;

int main() {

    set<int> conjunto;

    conjunto.insert(10);    // {10}
    conjunto.insert(12);    // {10, 12}
    conjunto.insert(-1);    // {-1, 10, 12}

    cout << conjunto.size() << endl;    // 3

    cout << conjunto.count(10) << endl; // 1

    conjunto.insert(10);    // {-1, 10, 12}

    cout << conjunto.count(10) << endl; // 1

    if(conjunto.count(10) == 1) {
        cout << "El conjunto tiene un 10" << endl;
    }

    if(conjunto.count(-2) == 0){
        cout << "El conjunto tiene NO tiene al -2" << endl;
    }

    for(auto x : conjunto){
        cout << "x: " << x << '\n';
    }

    return 0;
}