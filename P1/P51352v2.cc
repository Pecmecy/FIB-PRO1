#include <iostream>
using namespace std;

int main() {
    char x, y;
    cin >> x >> y;
    'A' > 'P'; 
    'P' > 'V';
    'V' > 'A';
    if (x > y) cout << 1 << endl;
    else if (y > x) cout << 2 << endl;
    else cout << "-" << endl;
}