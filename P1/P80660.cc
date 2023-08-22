#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int contador = 0;
        while (n != 1) {
            if (n%10 == 0 or n%10 == 2 or n%10 == 4 or n%10 == 6 or n%10 == 8) {
                n = n/2;
                ++contador;
            }
            else {
                n = (n*3)+1;
                ++contador;
            }
        }
        cout << contador << endl;
    }
}