#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 2; i < 17; ++i){
        int cifras, aux;
        aux = n;
        cifras = 1;
        while (aux/i > 0){
            cifras = cifras + 1;
            aux = aux/i;
        }
    cout << "Base " << i << ": " << cifras <<  " cifras." << endl;
    }
}