#include <iostream>
#include <vector>
using namespace std;

//Pre: v es válido.
//Post: v queda ordenado ascendentemente según operador <.
void insert(vector<double>& v) {
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        //buscar la posición correcta desde i hasta 0 para el elemento v[i].
        double x = v[i];
        int j = i;          //posición en la que compruebo si tiene que ir x.
        while (j > 0 and x < v[j-1]) {
            v[j] = v[j - 1];
            --j;
        }
        //al salir del bucle, j es la posición que buscábamos.
        v[j] = x;
    }
}
