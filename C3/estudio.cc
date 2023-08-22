#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//función para odernar por inserción.
void insercion(vector<double>& v) {
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        int pos = i;
        double num = v[i];
        while (pos > 0 and v[pos - 1] > num) {
            v[pos] = v[pos - 1];
            --pos;
        }
        v[pos] = num;
    }
}

//ordenar por selección.
void intercambio(int a, int b) {
    int aux = a;
    a = b;
    b = aux;
}

int pos_min(const vector<int>& v, int from) {
    int p = from;
    for (int i = from + 1; i < v.size(); ++i) {
        if (v[i] < v[p]) p = i;
    }
    return p;
}

void seleccion(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n-1; ++i) {
        int p_min = pos_min(v, i);
        intercambio(v[i], v[p_min]);
    }
}

int main() {...}