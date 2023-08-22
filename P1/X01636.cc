#include <iostream>
using namespace std;

int main() {
    int base, n;
    cin >> base;
    while (cin >> n) {
        int suma = 0;
        cout << n << ": ";
        while (n != 0) {
            suma = suma + n%base;
            n = n/base;
        }
        cout << suma << endl;
    }
}