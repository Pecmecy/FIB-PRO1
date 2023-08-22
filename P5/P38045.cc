#include <iostream>
#include <cmath>
using namespace std;

int square(int n) {
    return n*n;
}

double sqroot(int n) {
    cout.setf(ios::fixed);
    cout.precision(6);
    return sqrt(n);
}

int main() {
    int n;
    while (cin >> n) {
    cout << square(n) << " " << sqroot(n) << endl;
    }
}