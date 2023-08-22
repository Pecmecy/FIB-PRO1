#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        cout << "The sum of the digits of " << n << " is ";
        int suma = 0;
        while (n != 0) {
            suma = suma + n%10;
            n = n/10;
        }
        cout << suma << "." << endl;
    }
}