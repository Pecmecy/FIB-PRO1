#include <iostream>
#include <string>
using namespace std;

struct Rational {
    int num, den;
};

//Pre: números n y m enteros.
//Post: mcd entre ambos números.
int factorial(int n, int m) {
    if (m == 0) return n;
    else return factorial(m, n%m);
}

//Pre: numerador y denominador de un numero racional.
//Post: racoinal simplificado.
Rational racional(int n, int d) {
    Rational r;
    int mcd = factorial(n, d);
    r.num = n/mcd;
    r.den = d/mcd;
    if (r.den < 0) {
        r.den = -r.den;
        r.num = -r.num;
    }
    return r;
}

//Pre: string determinando la operación entre las 4 posibles, dos números racionales con numerador y denominador.
//Post: numero racional resultado de la operacion entre ambos numeros.
Rational calculo(const string& operacion, Rational& first, Rational& second) {
    int num, den;
    Rational result;
    if (operacion == "suma") {
        num = first.num * second.den + second.num * first.den;
        den = first.den * second.den;
        result = racional(num, den); 
    }

    if (operacion == "resta") {
        num = first.num * second.den - second.num * first.den;
        den = first.den * second.den;
        result = racional(num, den); 
    }

    if (operacion == "multiplica") {
        num = first.num * second.num;
        den = first.den * second.den;
        result = racional(num, den); 
    }

    if (operacion == "divideix") {
        num = first.num * second.den;
        den = first.den * second.num;
        result = racional(num, den); 
    }
    return result;
}

int main() {
    int n, d;
    cin >> n >> d;
    Rational firstrational = racional(n, d);
    if (firstrational.den == 1) cout << firstrational.num << endl;          //Creación e impresión del primer racional formado por los dos primeros enteros.
    else cout << firstrational.num << "/" << firstrational.den << endl;     //Si el denominador es 1 entonces el racional es entero y solo se necesita imprimir el numerador.
    int ncalc, dcalc;
    string op;
    while (cin >> op >> ncalc >> dcalc) {
        Rational secondrational = racional(ncalc, dcalc);                   //Creación del segundo racional con los dos siguientes enteros después del string que determina la operación.
        firstrational = calculo(op, firstrational, secondrational);         //Uso de "Firstrational" para guardar el resultado del cálculo pertinente entre "firstrational" y "secondrational" de manera que se evita crear una tercera tupla innecesaria.
        if (firstrational.den == 1) cout << firstrational.num << endl;      
        else cout << firstrational.num << "/" << firstrational.den << endl;
    }
}