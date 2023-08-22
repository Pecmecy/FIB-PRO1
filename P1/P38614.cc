#include <iostream>
using namespace std;

int main() {
    int n, aux;
    cin >> n;
    aux = n;
    int odd = 0;
    while (aux > 0){
        odd = odd + aux%10;
        aux = aux/100;  
    }
    if (odd%2 == 0) cout << n << " IS COOL" << endl;
    else cout << n << " IS NOT COOL" << endl;
}