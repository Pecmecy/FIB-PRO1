#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    m = 1;
    while (m < 11) {
        cout << n << "*" << m << " " << "=" << " " << n*m << endl;
        m = m + 1;
    }
}