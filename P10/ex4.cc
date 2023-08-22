#include <iostream>
#include <vector>
using namespace std;

//Ordenación por inserción.
void insertion_sort(vector<double>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        double vact = v[i];                         //vact: valor actual a ordenar.
        int pos = i;                                //pos: posición actual.
        while (pos > 0 and v[pos - 1] > vact) {
            v[pos] = v[pos - 1];
            --pos;
        }
        v[pos] = vact;
    }
}

int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i=0; i<n; ++i) {
            cin >> V[i];
        }
        insertion_sort(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}
