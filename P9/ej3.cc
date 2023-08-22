#include <iostream>
using namespace std;

struct Rational {
    int num, den;
};

//Función que calcula el mcd del numerador y el numerador recursivamente. Aplicación del algoritmo de Euclides.
//Input: numerador y denominador.
//Output: mcd de ambos.
int factor(int n,int m) {
    if (m == 0) return n;
    else return factor(m, n%m);
}

//Input: numerador y denominador;
//Output: numerador/denominador simplificados donde el denominador siempre es positivo.
Rational rational(int n, int d) {
    Rational r;
    int mcd = factor(n, d);
    r.num = n/mcd;
    r.den = d/mcd;
    if (r.den <= -1) {
        r.den = -r.den;
        r.num = -r.num;
    }
    return r;
}  

int main() {
    int n, d;
    while (cin >> n >> d) {
        Rational r = rational(n, d);
        cout << r.num << "/" << r.den << endl;
    }
}