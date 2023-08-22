#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

//Lectura de la matriz.
//Pre: enteros n y m > 0
//Post: matrix mxn
Matrix leer_matrix(int m, int n) {
    Matrix mat(m, Row(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) cin >> mat[i][j];
    }
    return mat;
}

//Mirar si ambas filas comparadas son iguales.
//Pre: matriz con índices i y j válidos.
//Post: True si las filas ki y kj son iguales, false en caso contrario.
bool son_iguales(const Matrix& mat, int i, int j) {
    int n = mat[0].size();
    for (int k = 0; k < n; ++k) if (mat[i][k] != mat[j][k]) return false; 
    return true;
}

//Comprobar si la línea es diferente a alguna de las anteriores.
//Pre: Matriz con índice i válido.
//Post: false si es igual a todas sus anteriores, true en caso contrario.
bool nueva_linea(const Matrix& mat, int i) {
    for (int j = 0; j < i; ++j) {
        if (son_iguales(mat, i, j)) return false;
    }
    return true;
}

int main() {
    int m, n;
    while (cin >> m >> n) {
        Matrix matrix = leer_matrix(m, n);
        int cont = 0;
        for (int i = 0; i < m; ++i) if (nueva_linea(matrix, i)) ++cont;
        cout << cont << endl;
    }
}