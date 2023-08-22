#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    double n, x, y, z;
    y = 0;
    z = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        y = x*x + y;
        z = x + z;
    }
    cout << 1/(n-1)*y - 1/(n*(n-1))*(z*z) << endl;
}