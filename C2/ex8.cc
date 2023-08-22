#include <iostream>
using namespace std;

//Input: ...
//Output: ...
bool divisors_odd(int x, int y) {
    if (x < 10 and x > 0) return (y%x) == 0;
    else if (x == 0) return true;
    else return divisors_odd(x/100, y) and y%(x%10) == 0;
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        if (divisors_odd(x,y)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}