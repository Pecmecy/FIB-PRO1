#include <iostream>
#include <cmath>
using namespace std;

//Pre: entero 'n'.
//Post: cierto si 'n' es una potencia de 2, falso en caso contrario.
bool is_power_2(int n) {
    bool power = false;
    int i = 1;
    while (i <= n and !power) {
        if (i == n) power = true;
        else i = i*2;
    }
    if (power) return true;
    else return false;
}


int main() {
    int n, pos;
    pos = 1;
    bool encontrado = false;
    cin >> n;
    while (n != -1 and !encontrado) {
        if (is_power_2(n)) encontrado = true;
        else {
            cin >> n;
            ++pos;
        }
    }
    if (encontrado) cout << pos << endl;
    else cout << 0 << endl;
}