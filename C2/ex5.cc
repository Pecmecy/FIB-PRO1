#include <iostream>
using namespace std;

int remove_zeros(int x) {
    if (x < 10) return x;
    else if (x%10 == 0) return remove_zeros(x/10);
    else return remove_zeros(x/10)*10+x%10;
}

int main() {
    int x;
    while (cin >> x) cout << remove_zeros(x) << endl;
}