#include <iostream>
using namespace std;

int main() {
    int d, n, t, s;
    s = 0;
    cin >> d >> n >> t;
    for (int i = 0; i < t; ++i){
        int x;
        cin >> x;
        n = n + x - d;
        if (n > 0) s = s + 1;
    }
    cout << s << endl;
}