#include <iostream>
#include <vector>
using namespace std;

/*typedef vector<int> Fila;
typedef vector<Fila> Tablero;

// Pre: tab es configuracion del tablero cuando el caballo ha hecho k-1 saltos y
//      k >= 1 indica que se ha de simular el k-esimo salto.
//
// Post: tab es la configuracion  del tablero cuando se  ha hecho el k-esimo salto
//       testigo es true si tab ha cambiado y false en caso contrario

//comprueba si el movimiento con i, j está dentro del límite del tablero. Cierto si lo está, falso en caso contrario.
bool puede_mover(int n, int m, int i, int j) {
    bool movimiento = false;
    if (i < n and i >= 0 and j < m and j >= 0) movimiento = true;
    return movimiento;
}

void move_update(Tablero& tab, int& k, bool& testigo) {
    int n = tab.size();
    int m = tab[0].size();
    if (puede_mover(n, m, i, j) v[i][j])
}


void escribir_tablero(const Tablero& tab) {
    int m = tab.size();
    int n = tab[0].size();
    for (int i = 0; i < m; ++i) {
        cout << tab[i][0];
        for (int j = 1; j < n; ++j) cout << ' ' << tab[i][j];
        cout << endl;
    }
}

//inicializa el tablero tab a cero
void set_zero(Tablero& tab) {
    int m = tab.size();
    int n = tab[0].size();
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            tab[i][j] = 0;
}

int main() {
    int m;
    while (cin >> m) {
        int n;
        cin >> n;
        Tablero tab(m, Fila(n));
        set_zero(tab);
        int i, j;
        cin >> i >> j;
        tab[i][j] = 1;
        bool testigo = true;
        int k = 1;
        while (testigo) {
            move_update(tab, k, testigo);
            ++k;
        }
        escribir_tablero(tab);
        cout << endl;
    }
}
*/

struct Prueba {
    int integer;
    string palabra;
};

int main() {
    Prueba p;
    cin >> p.integer >> p.palabra;
    Prueba c = p;
    cout << c.integer << " " << c.palabra << endl; 
}