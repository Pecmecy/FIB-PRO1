#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    if (x >= 'A' and x <= 'Z') cout << char(x + 32) << endl;
    else cout << char(x - 32) << endl;
}