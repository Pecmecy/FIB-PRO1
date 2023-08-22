// Not correct, does not work properly

#include <iostream>
using namespace std;

int main() {
    char letra;
    bool palabra = false;
    while (not palabra and letra != '.') {
        cin >> letra;
        if (letra == 'h') {
            cin >> letra;
            if (letra == 'e') {
                cin >> letra;
                if (letra == 'l') {
                    cin >> letra;
                    if (letra == 'l') {
                        cin >> letra;
                        if (letra == 'o') palabra = true;
                    }
                }
            }
        }
    }
    if (palabra) cout << "hello" << endl;
    else cout << "bye" << endl;
}