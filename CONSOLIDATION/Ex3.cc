#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int espaileft = 0;
    int espaimid = n-2;

    for (int i=0; i<n; ++i) cout << "*";
    cout << endl;

    for (int i=1; i<n; ++i) {
        ++espaileft;
        for (int j=0; j<espaileft; ++j) cout << " ";
        cout << "*";

        --espaimid;
        for (int k=espaimid; k>0; --k) cout << " ";
        if (espaimid != -1) cout << "*" << endl;
        else cout << endl;
    }
}