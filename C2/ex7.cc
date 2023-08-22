#include <iostream>
using namespace std;

bool pairwise_sum(int x, int y) {
    if (x < 100) return (x%10 + x/10) == y;
    else {
        return pairwise_sum(x/100, y) and (x%100)%10 + (x%100)/10 == y;
    }
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        if (pairwise_sum(x, y)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}