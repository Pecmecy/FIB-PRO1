#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int leftspace=0;
    int midspace=n-2;

    for (int i=0; i<n; ++i) cout << "*";
    cout << endl;

    for (int i=1; i<n; ++i){
        ++leftspace;
        for (int j=0; j<leftspace; ++j) cout << " ";
        cout << "*";

        --midspace;
        for (int k=midspace; k>0; --k) cout << " ";
        if (midspace != -1) cout << "*" << endl;
        else cout << endl;
    }
}