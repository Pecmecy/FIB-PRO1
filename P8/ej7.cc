#include <iostream>
#include <vector>
using namespace std;


typedef vector<vector<int> > Matrix;

//Pre: enteros tal que f filas y c columnas.
//Post: matriz con f filas y c columnas.
Matrix leer_matriz(int f, int c) {
    Matrix matriz(f, vector<int>(c));
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) cin >> matriz[i][j];
    }
    return matriz;
}

//Pre: Matriz no vacía.
//Post: elementos mínimo y máximo de la matriz dada.
void min_max(const Matrix& mat, int& minimum, int& maximum) {
    int f = mat.size();
    int c = mat[0].size();
    minimum = maximum = mat[0][0];
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if (mat[i][j] < minimum) minimum = mat[i][j];
            else if (mat[i][j] > maximum) maximum = mat[i][j];
        }
    }
}



int main() {
    int f, c;
    int diferencia = 0;
    int cont, contdef;
    cont = contdef = 0;
    while (cin >> f >> c) {
        ++cont;
        Matrix matriz = leer_matriz(f, c);
        int max, min;
        min_max(matriz, min, max);

        if ((max - min) > diferencia) {
            diferencia = max - min;
            contdef = cont;
        }
    }
    if (contdef == 0) contdef = 1;
    cout << "la diferencia maxima es " << diferencia << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << contdef << endl;
}