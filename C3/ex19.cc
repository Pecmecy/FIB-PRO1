#include <iostream>
using namespace std;

bool is_power(int n, int base) {
    if (n == 1) return true;
    else if (base == 1) return false;
    else if (n < base) return false;
    else {
        int pot = 1;
        while (pot <= n) {
            pot = pot * base;
            if (pot == n) return true;
        }
        return false;
    }
}

bool power_pair(int a, int b) {
    int base = 1;
    while (base <= a or base <= b) {
        if (is_power(a, base) and is_power(b, base)) return true;
        ++base;
    }
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        int nanterior = n;
        int cont = 0;
        while (n != 0) {
            if (power_pair(n, nanterior)) ++cont;
            nanterior = n;
            cin >> n;
        }
        cout << cont - 1 << endl;
    }
}