#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n > 9) {
        int x;
        x = n%10;
        cout << x;
        n = n/10;
    }
    cout << n << endl;
}