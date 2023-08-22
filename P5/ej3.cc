#include <iostream>
using namespace std;

//Pre: un año entre 1800 y 9999.
//Post: si es un año bisiesto o no.

bool is_leap_year(int year){
    if (((year%4 == 0 and year%100 != 00) or (year%100 == 00 and (year/100)%4 == 0)) and year != 1800 and year != 1900) return true;
    else return false;
}

//Input: secuencia de años entre 1800 y 9999.
//Output: "YES" si es bisiesto, "NO" si no lo es.
int main() {
    int year;
    while (cin >> year) cout << (is_leap_year(year) ? "true" : "false") << endl;
}