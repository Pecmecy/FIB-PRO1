#include <iostream>
using namespace std;

//Pre: número n.
//Post: factorial de n.

int factorial (int n) {
    int fac = n;
    if (fac == 0) return 1;
    else {
        --n;
        while (n >= 1) {
            fac = fac * n;
            --n;
        }
    return fac;
    }
}


int main () {
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
    } 
}

