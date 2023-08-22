#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Secuencia;

Secuencia leer_numeros(int n) {
    Secuencia s(n);
    for (int i = 0; i < n; ++i) cin >> s[i];
    return s;
}

bool found(const Secuencia& s) {
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; ++j) if (s[i] == s[j]) return true;
    }
    return false;
}

int num_rep(const Secuencia& s) {
    int n = s.size();
    int rep;
    int i = 0;
    bool repetido = false;
    while (!repetido and i < n) {
        int j = 1;
        while (j < n and !repetido) {
            if (s[i] == s[j]) {
                rep = s[i];
                repetido = true;
            }
            ++j;
        }
        ++i;
    }
    return rep;
}

int pos_rep(const Secuencia& s, int numrep) {
    int i = s.size() - 1;
    int pos;
    bool posicion = false;
    while (i >= 0 and !posicion) {
        if (s[i] == numrep) {
            pos = i;
            posicion = true;
        }
        else --i;
    }
    return pos;
}

int main() {
    int n;
    while (cin >> n) {
        Secuencia lista = leer_numeros(n);
        if (found(lista)) {
            int numrep = num_rep(lista);
            int posrep = pos_rep(lista, numrep);
            cout << numrep << " " << posrep << endl;
        }
        else cout << "NO" << endl;
    }
}
