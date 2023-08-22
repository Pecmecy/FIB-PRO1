#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (a < b) {
        cout << a << ",";
        a = a + 1;
    }
    if (a == b) cout << b << endl;
    else cout << endl;   
}