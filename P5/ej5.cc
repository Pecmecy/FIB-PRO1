#include <iostream>
using namespace std;

//Pre: dos números a y b.
//Post: b y a cambiados de orden.

void swap2(int& a, int& b){
    int aux;
    aux = a;
    a = b;
    b = aux;
}


int main() {
    int x,y;
    while (cin >> x >> y) {
        swap2(x, y);
        cout << x << " " << y << endl;
    }
}
