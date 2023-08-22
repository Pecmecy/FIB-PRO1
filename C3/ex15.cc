#include <iostream>
#include <vector>
using namespace std;

//Pre: vector ordenado no vacío, entero mayor que v[0] y menor que v[n].
//Post: última posición del vector en la que z es mayor o igual al valor de v[i].
int effi_last_pos(const vector<int>& v, int z) {
    int i = v.size() - 1;
    int r = 0;
    while (r + 1 != i) {
        int mid = (r + i)/2;
        if (v[mid] <= z) r = mid;
        else i = mid;
    }
    return r;
}

//gets vector v from input chanel
void read_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    read_vector(v);
    int z;
    while (cin >> z)
        cout << effi_last_pos(v, z) << endl;
}