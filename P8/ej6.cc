#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

bool is_diagonal_increase(const Matrix& a, int i, int j) {
    int m = a.size();
    int n = a[0].size();

    //caso --i ++j
    int x = i - 1;
    int y = j + 1;
    int ant = a[i][j];
    while (x >= 0 and y < n) {
        if (ant < a[x][y]) ant = a[x][y];
        else return false;
        --x;
        ++y;
    }

    //caso --i --j
    x = i - 1;
    y = j - 1;
    ant = a[i][j];
    while (x >= 0 and y >= 0) {
        if (ant < a[x][y]) ant = a[x][y];
        else return false;
        --x;
        --y;
    }

    //caso ++i --j
    x = i + 1;
    y = j - 1;
    ant = a[i][j];
    while (x < m and y >= 0) {
       if (ant < a[x][y]) ant = a[x][y];
        else return false;
        ++x;
        --y;
    }

    //caso ++i ++j
    ant = a[i][j];
    x = i - 1;
    y = j + 1;
    while (x < m and y < n) {
        if (ant < a[x][y]) ant = a[x][y];
        else return false;
        ++x;
        ++y;
    }
    return true;
}

Matrix leer_matriz(int m, int n) {
    Matrix matriz(m, Row(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) cin >> matriz[i][j];
    }
    return matriz;
}


int main() {
    int n, m;
    while (cin >> m >> n) {
        Matrix matriz = leer_matriz(m, n);

        int i, j;
        cin >> i >> j;
        if (is_diagonal_increase(matriz, i, j)) cout << "yes" << endl;
        else if (!is_diagonal_increase(matriz, i, j)) cout << "yes" << endl;
    }
}
