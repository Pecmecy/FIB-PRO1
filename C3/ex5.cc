#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Lista;

void extremos(const Lista& l, int& i, int& j, bool encontrado) {
    encontrado = false;
    int sumai, sumaj;
    for (int k = l.size() - 1; k > -1; --k) {
        j = l.size() - 1;
        i = k;
        sumai = sumaj = 0;
        while (i > -1 and j >= i and !encontrado) {
            sumai = sumai + l[i];
            sumaj = sumaj + l[j];
            if (sumaj == sumai) encontrado = true;
            else {
                if (j > i) --j;
                else {
                    --i;
                    sumai = sumaj = 0;
                }
            }
        }
    }
}

int main() {
    int n;
    while (cin >> n) {
        Lista lista(n);
        for (int i = 0; i < n; ++i) cin >> lista[i];
        int x, y;
        bool foundextremos = false;
        extremos(lista, x, y, foundextremos);
        if (foundextremos) cout << x << " " << y << endl;
        else cout << "no" << endl;
    }
}