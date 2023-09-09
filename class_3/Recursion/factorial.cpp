#include <iostream>
using namespace std;

// 10! = 10 * 9 * 8 ... * 2 * 1
// 9! = 9 * 8 ... * 2 * 1
// 10! = 10 * (9!)

// N! = N * (N-1)!

int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

int main() {

    cout << factorial(3) << '\n';
    // 3 * 2 * 1

    return 0;
}