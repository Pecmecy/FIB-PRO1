#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    int n, m;
    while (cin >> n >> m) {
        double h = 0.0;
        if (m == n) h = 0.0;
        else {
            for (double i = m+1; i <= n; ++i) {
                h = h + 1/i;
            }
        }
        cout << h << endl;
    }
}