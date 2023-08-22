#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);  
    cout.precision(4);
    
    double c, i, t;
    string interes;
    cin >> c >> i >> t >> interes;
    if (interes == "simple") {
        double d = (i*c)/100;
        cout << (d*t)+c << endl;
    }
    else if (interes == "compound") {
        for (int j = 0; j < t; ++j) {
            double d = (i*c)/100;
            c = c + d;
        }
    cout << c << endl;
    }
}