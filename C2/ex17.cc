#include <iostream>
using namespace std;

//Pre: natural n.
//Post: cierto si es un número "univariate" (sus dígitos son iguales en módulo 10) falso en caso contrario.
bool is_univariate(int n) {
    if (n < 100 and n > 9) return n/10 == n%10;
    else if (n < 10) return true;
    else return is_univariate(n/10) and (n/10)%10 == n%10;
}


int main() {
    int n, cont;
    cont = 1;
    bool encontrado = false;
    cin >> n;
    while (n != -1 and !encontrado) {
        if (is_univariate(n)) {
            cout << cont << endl;
            encontrado = true;
        }
        else {
            ++cont;
            cin >> n;
        }
    }
    if (!encontrado and n == -1) cout << "0" << endl;
}
