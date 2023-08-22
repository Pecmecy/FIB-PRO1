#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Campo;

//Pre: dos enteros m y n (filas y columnas).
//Post: matriz con m filas y n columnas.
Campo leer_field(int m, int n) {
    Campo field(m, Fila(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) cin >> field[i][j];
    }
    return field;
}

//Pre: matriz de campo, enteros i y j, y un contador.
//Post: actualizar la matriz de campo con 0 en todos los puntos que pise diferentes a 0 y actualizar el contador si es necesario.
void contar_campo(Campo& field, int x, int y, int& contador) {
    int m = field.size();
    int n = field[0].size();
    int i = x;
    bool campo = false;
    while (i < m and field[i][y] != 0) {        
        int j = y;
        while (j < n and field[i][j] != 0) {        //A medida que avanza en el campo actualizando "j" también actualiza el campo con 0 donde había otros números de manera que ya no se cuente como un campo.
            field[i][j] = 0;                        //Una vez se encuentra con un 0 en "j" aumenta en un "i" y vuelve a comenzar desde "j" inicial pero en la siguiente fila. Vuelve a hacer el mismo proceso hasta que la "i" con la "j" inicial se encuentra un 0.
            campo = true;                           //En ese momento sabe que se ha encontrado con un límite del campo en el que estaba y actualiza el contador del campo si se ha encontrado uno. 
            ++j;
        }
        ++i;
    }
    if (campo) ++contador;
}

int main() {
    int m, n;
    while (cin >> m >> n) {
        Campo field = leer_field(m, n);
        int contador = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                contar_campo(field, i, j, contador);
            }
        }
        cout << contador << endl;
    }
}