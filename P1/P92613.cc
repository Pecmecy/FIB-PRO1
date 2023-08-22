#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    int x, y;
    x = int(n);
    if (n - double(x) > .0) y = x + 1;
    else y = x;

    if (n - double(x) >= .5) cout << x << " " << y << " " << x + 1 << endl;
    else cout << x << " " << y << " " << x << endl;
}