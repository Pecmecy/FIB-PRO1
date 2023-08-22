#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2; //[a1,b1] y [a2,b2]
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 == a2 and b1 == b2) cout << "=" << " " << "," << " ";
    else if ((a1 > a2 and b1 < b2) or (a1 > a2 and b1 == b2) or (a1 == a2 and b1 < b2)) cout << "1" << " " << "," << " ";
    else if ((a1 < a2 and b1 > b2) or (a1 < a2 and b1 == b2) or (a1 == a2 and b1 > b2)) cout << "2" << " " << "," << " ";
    else cout << "?" << " " << "," << " ";

    if ((a1 == a2 and b1 == b2) or (a1 > a2 and b1 < b2) or (a1 > a2 and b1 == b2)) cout << "[" << a1 << "," << b1 << "]" << endl;
    else if (b1 < a2 or b2 < a1) cout << "[]" << endl;
    else if ((a1 < a2 and b1 > b2) or (a1 < a2 and b1 == b2)) cout << "[" << a2 << "," << b2 << "]" << endl;
    else if ((a1 < a2 and b1 < b2) or (a1 == a2 and b1 < b2)) cout << "[" << a2 << "," << b1 << "]" << endl;
    else if ((a1 > a2 and b1 > b2) or (a1 == a2 and b1 > b2)) cout << "[" << a1 << "," << b2 << "]" << endl;
}