#include <iostream>
using namespace std;

int main() {
    int n, ult, penult;
    bool encontrado = false;
    cin >> n;
    ult = n;
    penult = n;
    while (n != 0 and not encontrado) {
        if (ult > 3143 and (ult > n and ult > penult)) {
            encontrado = true;
            cout << "YES" << endl;
        }
        penult = ult;
        ult = n;
        cin >> n;
    }
    if (n == 0 and not encontrado) cout << "NO" << endl;
}