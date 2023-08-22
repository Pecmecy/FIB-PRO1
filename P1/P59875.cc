#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    while (x < y){
        cout << y << endl;
        y = y - 1;
    }
    while (x > y){
        cout << x << endl;
        x = x - 1;
    }
    if (x == y) cout << y << endl;
    }