#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int act, max;
        cin >> max;
        for (int i = 0; i < n-1; ++i) {
            cin >> act;
            if (act > max) max = act;
        }
        cout << max << endl;
    }
}