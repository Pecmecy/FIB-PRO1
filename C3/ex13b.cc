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

int recoge(const Room& r, int j, int from, int to, int inc) {
    int basura = 0;
    while (from != to) {
        if (r[from][j] == 0) cout << from << " " << j << endl;
        else basura = basura + r[from][j];
        from = from + inc;
    }
    return basura;
}

int main() {
    int n, m;
    cin >> n >> m;
    Room room = leer_room(n, m);
    int total = 0;
    for (int j = 0; j < m; ++j) {
        if (j%2 == 0) total += recoge (room, j, 0, n, 1);
        else total += recoge (room, j, n-1, -1, -1);
        cout << "Total en columna " << j << ": " << total << endl;
    }
}