#include <iostream>
using namespace std;

//Pre: un año entre 1800 y 9999.
//Post: si es un año bisiesto o no.

bool is_leap_year(int year){
    if (((year%4 == 0 and year%100 != 00) or (year%100 == 00 and (year/100)%4 == 0)) and year != 1800 and year != 1900) return true;
    else return false;
}

//Pre: fecha (día, mes, año).
//Post: si la fecha es correcta return true, si no return false.

bool is_valid_date(int d, int m, int a) {
    if (a >= 1800 and a <= 9999) {
        if (m == 2) {
            if (is_leap_year(a) and d == 29) return true;
            else if (d >= 1 and d <= 28) return true;
            else return false;
        }
        else if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) {
            if (d >= 1 and d <= 31) return true;
            else return false;
        }
        else if (m == 4 or m == 6 or m == 9 or m == 11) {
            if (d >= 1 and d <= 30) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}


int main() {
  int d, m, a;
  while (cin >> d >> m >> a)
    cout << (is_valid_date(d, m, a) ? "true" : "false") << endl;
}

