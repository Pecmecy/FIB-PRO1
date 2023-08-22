#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    x = 0;
    while (n >= 1){;
        x = (n*n) + x;
        n--;
    }
    cout << x << endl; 
     
}