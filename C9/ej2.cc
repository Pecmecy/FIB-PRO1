#include <iostream>
using namespace std;

struct Fraction {
    int num, den;   // always strictly positive
};

int factorial(int n, int m) {
    if (m == 0) return n;
    else return factorial(m, n%m);
}

void racional(Fraction& a) {
    if (a.den > 1) {
        int mcd = factorial(a.num, a.den);
        a.num = a.num/mcd;
        a.den = a.den/mcd;
    }
}

Fraction addition(const Fraction& x, const Fraction& y) {
    Fraction result;
    result.num = x.num * y.den + x.den * y.num;
    result.den = x.den * y.den;
    return result; 
}

int main() {
    Fraction addedfractions, fraction;
    addedfractions.num = 0;
    addedfractions.den = 1;
    bool operar = true;
    char c;
    while (operar) {
        cin >> fraction.num >> c >> fraction.den >> c;
        if (c == '=') operar = false;
        racional(fraction);
        addedfractions = addition(addedfractions, fraction); 
        racional(result);                                       //Hacer el "racional" dentro de la función de "addition" hace que el programa entre en bucle infinito. Hay que hacerlo fuera. ¿Motivo? Ni idea.
    }
    cout << addedfractions.num << "/" << addedfractions.den << endl;
}