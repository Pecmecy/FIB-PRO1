#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n, w, l, r;
    cout.setf(ios::fixed);
    cout.precision(6);
    string forma;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> forma;
        if (forma == "rectangle") {
            cin >> w >> l;
            cout << w*l << endl;
        }
        if (forma == "circle") {
            cin >> r;
            cout << M_PI*(r*r) << endl;
        }
    }
}
