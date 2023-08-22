#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;
    s = s + 1;
    if (s > 59) { 
    m = m + 1;
    s = 00;
    }
    if (m > 59) {
    h = h + 1;
    m = 00;
    }
    if (h > 23) h = 0;
    cout << h/10 << h%10 << ":" << m/10 << m%10 << ":" << s/10 << s%10 << endl; //Si se divide el int del número (h por ejemplo) entre 10 dará siempre el número sin decimales redondeando por abajo. 
                                                                                //Si a este se le añade al lado el resto de la misma operación a la derecha el número resultante será el mismo número con dos dígitos.
}