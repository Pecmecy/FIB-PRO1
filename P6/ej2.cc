#include <iostream>
using namespace std;


bool is_perfect_prime(int n) {
    if (n%2 != 0) return true;
    else {
        while (n%2 != 0) suma = suma + n%10;
        if (suma%2 == 0) return false 
        return is_increasing(suma)
    }
}


int main() {
    int n;
    while (cin >> n) cout << (is_perfect_prime(n) ? "true" : "false") << endl;
}
