#include <iostream>
using namespace std;

int main() {
    int x,a,b,c;
    cin >> x;
    a = x%10;
    b = (x/10)%10;
    c = (x/100)%10;
    cout << a + b + c << endl;
}