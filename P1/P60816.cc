#include <iostream>
using namespace std;

int main() {
    int n;
    char x;
    cin >> n;
    while (n > 15) {
        if (n%16 > 9){
        x = 'A' -10 + n%16;
        cout << x;
        }
        else cout << n%16;
        n = n/16;
    }
    if (n > 9){
        x = 'A' -10 + n;
        cout << x << endl;
        }
        else cout << n << endl;
}