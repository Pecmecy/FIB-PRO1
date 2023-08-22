#include <iostream>
using namespace std;

//Pre: 4 números que componen 2 fracciones (n1/d1 y n2/d2).
//Post: cierto si la primera fracción < segunda fracción, falso al revés.

bool c_frac(int n1, int d1, int n2, int d2) {
    if (n1 * d2 < n2 * d1) return true; // n1/d1 < n2/d2. Por lo tanto multiplicando por d1 y d2 a ambos lados -> n1*d2 < n2*d1.
    else return false;                  // si se hace con fracciones al ser int las igualdades se redondean y el < no se da en muchos casos.
}


int main() {
    int n1, d1, n2, d2;
    while (cin >> n1 >>  d1 >> n2 >> d2) {
        if (c_frac(n1,d1,n2,d2)) cout << "yes" << endl;
        else cout << "no" << endl;
    }   
}
