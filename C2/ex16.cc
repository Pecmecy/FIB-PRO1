#include <iostream>
using namespace std;

int main() {
    int n, conttotal;
    conttotal = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b, c, cont;
        cont = 0;
        cin >> a >> b;
        if (cin >> c) {
            int suma = a + c;
            if (suma == b) {
                ++cont;
                ++conttotal;
            }
            a = b;
            b = c;
        }
        cout << cont << endl;
    }
    cout << "Total: " << conttotal << endl;
}