#include <iostream>
using namespace std;

int main() {
    double x, n, s;
    cout.setf(ios::fixed);
    cout.precision(2);
    n = 0;
    s = 0;
    while (cin >> x) {
        s = x + s;
        n = n + 1;
    }
    cout << s/n << endl;
}