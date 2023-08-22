#include <iostream>
using namespace std;

int main() {
    int n,odd,even;
    odd = even = 0;
    cin >> n;
    bool impar = true;
    while (n > 0) {
        if (impar) {
            odd = odd+n%10;
            impar = false;
            n = n/10;
        }
        else if (not impar) {
            even = even+n%10;
            impar = true;
            n = n/10;
        }
    }
    cout << odd << " " << even << endl;
    if (odd%even==0) cout << odd << " = " << even << " * " << odd/even << endl;
    else if (even%odd==0) cout << even << " = " << odd << " * " << even/odd << endl;
    else cout << "nothing" << endl;
}