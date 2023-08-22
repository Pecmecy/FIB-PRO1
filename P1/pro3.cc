#include <iostream>
using namespace std;

bool is_palindromic(int n) {
    int f = 0;
    int aux = n;
    while (aux != 0) {
        f = aux%10 + f*10;
        aux = aux/10;
    }
    if (n == f) return true;
    else return false;
}


int main() {
    int n;
    while (cin >> n) cout << (is_palindromic(n) ? "true" : "false") << endl;
}
