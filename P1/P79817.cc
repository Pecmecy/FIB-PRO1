#include <iostream>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m){
        int aux = n;
        if (m == 0) cout << 1 << endl;
        else {
            for (int i = 1; i < m; ++i){
            n = aux*n;
        }
        cout << n << endl;
        }  
    } 
}