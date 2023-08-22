#include <iostream>
using namespace std;

int main () {
    int a, b, aux;
    while (cin >> a >> b){
        aux = a;
        int n = 0;
        while (a <= b){
            n = n + a*a*a;
            a = a + 1;
        }
    cout << "suma dels cubs entre " << aux << " i " << b << ": " << n << endl;
    }
}