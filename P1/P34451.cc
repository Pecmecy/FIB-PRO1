#include <iostream>
using namespace std;

int main() {
    int n, x, multiple;
    multiple = 0;
    cin >> n;
    while (cin >> x) {
        if (x%n == 0) multiple = multiple + 1;
    }
    cout << multiple << endl;
}