#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Secuencia;

void zeros_counter(const Secuencia& u, Secuencia& v) {
    int n = u.size();
    int cont = 0;
    for (int j = n-1; j >= 0; --j) {
        if (u[j] == 0) ++cont;
        v[j] = cont;
    }
}

Secuencia leer_secuencia(int n) {
    Secuencia s(n);
    for (int i = 0; i < n; ++i) cin >> s[i];
    return s;
}

void print_secuencia(const Secuencia& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cout << v[i] << endl;
}

int main() {
    int n;
    cin >> n;
    Secuencia u = leer_secuencia(n);
    Secuencia v(n);
    zeros_counter(u, v);
    print_secuencia(v);
}