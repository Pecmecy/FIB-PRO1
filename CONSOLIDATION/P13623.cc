#include <iostream>
using namespace std;

int main() {
    int r, c, coins = 0;
    cin >> r >> c;
    for (int i=0; i<r; ++i) {
        for (int j=0; j<c; ++j) {
            char m;
            cin >> m;
            if ((i%2 == 0 and j%2 == 0) or (i%2 != 0 and j%2 != 0)) coins = coins +(m-'0');
        }
    }
    cout << coins << endl;
}