#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

//Lectura de secuencia de números y creación de matriz mxn.
//Pre: enteros n y m > 0.
//Post: matriz de dimensiones mxn.
Matrix leer_matriz(int m, int n) {
    Matrix mat(m, Row(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) cin >> mat[i][j];
    }
    return mat;
}

//Comprobación de las columnas diferentes respecto a la columna que se está estudiando.
//Pre: matriz con índices i y j válidos.
//Post: falso si hay alguna columna diferente con respecto a la estudiada, false en caso contrario.
bool son_iguales(const Matrix& mat, int i, int j) {
    int m = mat.size();
    for (int k = 0; k < m; ++k) if (mat[k][i] != mat[k][j]) return false;
    return true;
}

//Comprobar si la columna a estudiar es nueva o ya ha sido repetida anteriormente.
//Pre: matriz con índice i válido.
//Post false si la columna es igual a todas sus anteriores, cierto en caso contrario.
bool new_row(const Matrix& mat, int i) {
    for (int j = 0; j < i; ++j) {
        if (son_iguales(mat, i, j)) return false;
    }
    return true;
}

int main() {
    int m, n;
    while (cin >> m >> n) {
        int cont = 0;
        Matrix mat = leer_matriz(m, n);
        for (int i = 0; i < n; ++i) if (new_row(mat, i)) ++cont;
        cout << cont << endl;
    }
}