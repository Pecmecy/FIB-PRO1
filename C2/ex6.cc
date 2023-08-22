#include <iostream>
using namespace std;

// Pre: n >= 0
// Post: returns the sum of n's even digits
int even_digits(int n) {
    if (n < 10) {
        if (n%2 == 0) return n;
        else return 0;
    }
    else if (n%2 == 0) return even_digits(n/10) + n%10;
    else return even_digits(n/10);
}

int main() {
    int x;
    while (cin >> x) cout << even_digits(x) << endl;
}