#include <iostream>
using namespace std;

int main() {
    int n, m ,c=1;
    cin >> n >> m;
    if (m == -1) cout << "No existe" << endl;
    bool encontrado = false;
    while (m != -1) {
        if (not encontrado and (n+m)%10 != 0) {
            ++c;
        }
        else if (not encontrado and (n+m)%10 == 0) {
            encontrado = true;
            cout << m << ": " << c << endl;
        }
        cin >> m;
        if (m == -1 and not encontrado) cout << "No existe" << endl;
    }
}