#include <iostream>
using namespace std;

int main() {
    int n, m=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char c1,c2,c3;
        cin >> c1 >> c2 >> c3;
        if (c3 == '/') {
            if ((c2=='/') or (c1=='-' and c2=='-')) ++m;
        }
    }
    cout << m << endl;
}