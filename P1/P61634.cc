#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (((x%4 == 0 and x%100 != 00) or (x%100 == 00 and (x/100)%4 == 0)) and x != 1800 and x != 1900) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}