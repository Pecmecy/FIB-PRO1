#include <iostream>
using namespace std;

int suma_digitos(int n) {
    if (n < 10) return n;
    else return suma_digitos(n/10) + n%10;
}

int main () {
    int ant, act, cont;
    cont = 0;
    cin >> ant;
    while (cin >> act) {
        int digitos = suma_digitos(act);
        if (ant%digitos == 0) ++cont;
        ant = act;
    }
    cout << cont << endl;
}