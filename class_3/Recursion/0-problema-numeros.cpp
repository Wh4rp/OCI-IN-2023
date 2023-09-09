#include<iostream>
#include<cassert>
using namespace std;

string fun(int n){
    assert(n > 0);

    if(n == 1){
        return "1";
    }else{
        return fun(n-1) + " " + to_string(n) + " " + fun(n-1);
    }
}

int main() {

    cout << "RECURSION\n";

    string s = "hola";
    string t = ", chao";
    string r = s + t;

    cout << r << '\n';

    cout << fun(-1) << '\n';

    return 0;
}