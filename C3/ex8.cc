#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;

// Pre: mat tiene dimensiones f*c mayores que 0; en la entrada hay una matriz de enteros de dimensiones f*c
// Post: mat contiene la matriz que había en la entrada
void read_matriz(Matriz& mat) {
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> mat[i][j];
    }
}

//prueba para comprobar que la matriz se lee y rellena correctamente.
void print_matriz(const Matriz& mat) {
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cout << mat[i][j] << " ";
        cout << endl;
    }
}

int suma_derecha(const Matriz& v, int i, int j) {
    int suma = 0;
    int c = v[i].size() - 1;
    for (int k = 0; k <= i; ++k) {
        for (int r = j; r <= c; ++r) suma = suma + v[k][r];
    }
    return suma;
}

int suma_izquierda(const Matriz& v, int i, int j) {
    int suma = 0;
    int f = v.size() - 1;
    for (int k = i; k <= f; ++k) {
        for (int r = 0; r <= j; ++r) suma = suma + v[k][r];
    }
    return suma;
}

int main() {
    int f, c;
    cin >> f >> c;
    Matriz matriz(f, Fila(c));
    read_matriz(matriz);
    int i, j;
    while (cin >> i >> j) {
        if (suma_derecha(matriz, i, j) == suma_izquierda(matriz, i, j)) cout << "si: " << suma_izquierda(matriz, i, j) << endl;
        else cout << "no: " << suma_derecha(matriz, i, j) << ", " << suma_izquierda(matriz, i, j) << endl;
    }
}