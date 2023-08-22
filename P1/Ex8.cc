#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int leftspace=0;
    int midspace=2*n-1;

    for (int i=0; i<n; ++i) {
        ++leftspace;
        for(int j=1; j<leftspace; ++j) cout << " ";
        cout << "V";

        midspace -=2;
        for (int k=midspace; k>0; --k) cout << " ";
        if (leftspace !=n) cout << "V" << endl;
        else cout << endl;
    }
}