#include <iostream>
#include <vector>
using namespace std;

// Pre: --
// Post: returns the position of the last element in v smaller than x, -1 if that element does not exist
int last_position_of(const vector<int>& v, double x) {
    bool menor = false;
    int posmenor = 0;
    for (int i = v.size() - 1; i > -1; --i) {
        if (v[i] < x and !menor) {
            posmenor = i;
            menor = true;
        }
    }
    if (menor) return posmenor;
    else return -1;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        double x = 0;
        int cont = 0;
        for (int i = 0; i < n; ++i) {
            if (v[i]%2 == 0) {
                x = x + v[i];
                ++cont;
            }
       }
        x = x/cont;
        cout << last_position_of(v, x) << endl;
    }
}