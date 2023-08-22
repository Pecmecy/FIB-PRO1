#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Filachar;
typedef vector<Filachar> Matrizchar;
typedef vector<int> Filaint;
typedef vector<Filaint> Puntuacion;

Matrizchar leer_matriz_puzzle(int m, int n) {
    Matrizchar puzzle(m, Filachar(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) cin >> puzzle[i][j];
    }
    return puzzle;
}

Puntuacion leer_matriz_puntuacion(int m, int n) {
    Puntuacion puntuacion(m, Filaint(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) cin >> puntuacion[i][j];
    }
    return puntuacion;
}

bool esta(const Matrizchar& puzzle, int i, int j, const string& word, int inc_i, int inc_j) {
    int k = 0;
    int m = puzzle.size();
    int n = puzzle[0].size();
    while (k < word.size() and i < m and j < n) {
        if (word[k] != puzzle[i][j]) return false;
        ++k;
        i = i + inc_i;
        j = j + inc_j;
    }
    return k == word.size();
}

int sumar_puntuacion(Puntuacion& puntuacion, const string& word, int i, int j, int inc_i, int inc_j) {
    int puntos = 0;
    int k = 0;
    int m = puntuacion.size();
    int n = puntuacion[0].size();
    while (k < word.size() and i < m and j < n) {
        puntos = puntos + puntuacion[i][j];
        ++k;
        i = i + inc_i;
        j = j + inc_j;
    }
    return puntos;
}

int main() {
    int filas, columnas;
    while (cin >> filas >> columnas) {
        Matrizchar puzzle = leer_matriz_puzzle(filas, columnas);
        Puntuacion puntuacion = leer_matriz_puntuacion(filas, columnas);

        int x;
        cin >> x;
        vector<string> word(x);
        for (int k = 0; k < x; ++k) cin >> word[k];
        for (int k = 0; k < x; ++k) {
            int puntos = -1;
            for (int i = 0; i < filas; ++i) {
                for (int j = 0; j < columnas; ++j) {
                    if (esta(puzzle, i, j, word[k], 0, 1)) {
                        if (sumar_puntuacion(puntuacion, word[k], i, j, 0, 1) > puntos) puntos = sumar_puntuacion(puntuacion, word[k], i, j, 0, 1);
                    }
                    if (esta(puzzle, i, j, word[k], 1, 0)) {
                        if (sumar_puntuacion(puntuacion, word[k], i, j, 1, 0) > puntos) puntos = sumar_puntuacion(puntuacion, word[k], i, j, 1, 0);
                    }
                }
            }
            if (puntos == -1) cout << "no" << endl;
            else cout << puntos << endl;
        }
    }
}