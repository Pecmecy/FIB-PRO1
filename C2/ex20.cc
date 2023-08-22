#include <iostream>
using namespace std;

int main() {
    int m, x, y, z, conttotal;
    conttotal = 0;
    while (cin >> m) {
        int cont = 0;
        for (int i = 0; i < m; ++i) {
            cin >> x >> y >> z;
            while (cin >> z) {
                if (x%y == z) {
                    ++conttotal;
                    ++cont;
                }
                x = y;
                y = z;
                cin >> z;
            }
        }
        cout << cont << endl;
    }
    cout << "Total: " << conttotal << endl;
}