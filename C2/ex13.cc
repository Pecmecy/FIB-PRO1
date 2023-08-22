#include <iostream>
using namespace std;

//Pre: dos enteros a y b.
//Post: Cierto si forman una pareja pitagórica (la suma de sus cuadrados equivale a un entero c al cuadrado), falso en caso contrario.
bool is_ptg(int a, int b) {
    int c = a*a + b*b;
    int i = 0;
    bool pair = false;
    while (!pair and i*i <= c) {
        if (i*i == c) pair = true;
        else ++i;
    }
    return pair;
}

int main() {
    int a, b, pos;
    cin >> a; 
    b = a;
    pos = 1;
    bool encontrado = false;
    while (cin >> b and !encontrado) {
        if (is_ptg(a, b)) {
        cout << "First pythagorean pair " << a << " " << b << " at position " << pos << endl; 
        encontrado = true;
        }
        
        else {
            a = b;
            ++pos;
        }
    }
    if (!encontrado) cout << "No pythagorean pairs" << endl;
}