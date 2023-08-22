#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Secuencia;

//Lectura de la secuencia de entrada.
//Pre: entero n > 0 y secuencia de n números.
//Post: vector Secuencia.
Secuencia leer_secuencia(int n) {
    Secuencia s(n);
    for (int i = 0; i < n; ++i) cin >> s[i];
    return s;
}

//Cuenta la cantidad de números de la secuencia que son de acumulación.
//Pre: --
//Post: retorna el total de posiciones de acumulación.
int acumulaciones(const Secuencia& sec) {
    int n = sec.size();
    int cont = 0;
    for (int i = n-1; i >= 0; --i) {
        int suma = 0;
        int j = i-1;
        while (j >= 0 and suma < sec[i]) {
            suma = suma + sec[j];
            --j;
        }
        if (suma == sec[i]) ++cont;
    }
    return cont;
}   

int main() {
    int n;
    while (cin >> n) {
        Secuencia sec = leer_secuencia(n);
        cout << acumulaciones(sec) << endl;
    }
}