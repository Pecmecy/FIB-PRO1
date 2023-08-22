#include <iostream>
using namespace std;

int main() {
    int n1,n2,n3,money = 0;
    while (cin >> n1 >> n2 >> n3)
        if (n1==n2 and n2==n3) {
            if (n1%2==1 and n1%3==0) money+=15;
            else if (n1%2==0) money+=10;
            else money+=5;
        }
    cout << money << endl;
}