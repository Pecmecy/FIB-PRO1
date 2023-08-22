#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Columna;
typedef vector<Columna> Room;

Room leer_room(int n, int m) {
    Room r(n, Columna(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> r[i][j];
    }
    return r;
}

void clean_par(const Room& r, int clean, int n, int j) {
    for (int i = 0; i < n; ++i) {
        if (r[i][j] == 0) cout << i << " " << j << endl;
        else clean = clean + r[i][j];
    }
    cout << "Total en columna " << j << ": " << clean << endl;
}

void clean_impar(const Room& r, int clean, int n, int j) {
    for (int i = n-1; i >= 0; --i) {
        if (r[i][j] == 0) cout << i << " " << j << endl;
        else clean = clean + r[i][j];
    }
    cout << "Total en columna " << j << ": " << clean << endl;
}

void clean_room(const Room& r) {
    int n = r.size();
    int m = r[0].size();
    int j = 0;
    int clean = 0;
    bool par = true;
    while (j < m) {
        if (j < m and par) {
            clean_par(r, clean, n, j);
            par = false;
            ++j;
        }
        else if (j < m and !par) {
            clean_impar(r, clean, n, j);
            par = true;
            ++j;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    Room room = leer_room(n, m);
    clean_room(room);
}