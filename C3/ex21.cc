#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Secuencia;

Secuencia leer_secuencia(int n) {
    Secuencia v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    return v;
}

int acumulados(const Secuencia& v) {
    int cont = 0;
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        int j = i + 1;
        int suma = 0;
        while (j < n and suma < v[i]) {
            suma += v[j];
            ++j;
        }
        if (suma == v[i]) ++cont;
    }
    return cont;
}

int main() {
    int n;
    while (cin >> n) {
    Secuencia v = leer_secuencia(n);
    cout << acumulados(v) << endl;
    }
}