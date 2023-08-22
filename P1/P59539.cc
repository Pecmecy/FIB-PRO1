#include <iostream>
using namespace std;

int main() {
    double x, n;
    cout.setf(ios::fixed);
    cout.precision(4);

    cin >> n;
    x = 0;
    while (n >= 1){
        x = (1/n) + x;
        n--;
    }
    cout << x << endl;
}