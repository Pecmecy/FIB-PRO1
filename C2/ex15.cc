#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, hf, mf, sf;
    hf = mf = sf = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) { 
        int h, m, s;
        h = m = s = 0;
        for (int j = 0; j < 8; ++j) {
            char c;
            cin >> c;
            if (j < 2) h = h*10 + int(c) - int('0');
            else if (j > 2 and j < 5) m = m*10 + int(c) - int('0');
            else if (j > 5) s = s*10 + int(c) - int('0');
        }
            hf = h + hf;
            mf = m + mf;
            sf = s + sf;
    }
    while (sf >= 60) {
        sf = sf - 60;
        ++mf;
    }
    while (mf >= 60) {
        mf = mf - 60;
        ++hf;
    }
    cout << hf << "H " << mf << "M " << sf << "S" << endl;
}