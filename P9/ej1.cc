#include <iostream>
#include <cmath>
using namespace std;

struct Clock {
    int h;       //0 <= h < 24.
    int m;     //0 <= m < 60.
    int s;     //0 <= s < 60;
};

Clock midnight() {
    Clock r;
    r.h = 0;
    r.m = 0;
    r.s = 0;
    return r;
}

//Input: Reloj con formato s, m, h.
//Output: Reloj con un segundo más.
void increase(Clock& r) {
    ++r.s;
    if (r.s >= 60) {
        r.s = 0;
        r.m = r.m + 1;
        if (r.m >= 60) {
            r.m = 0;
            r.h = r.h + 1;
            if (r.h >= 24) r.h = 0;
        } 
    }
}

//Input: Hora almacenado en la tupla Clock.
//Output: Imprime la hora del Clock.
void print(const Clock& r) {
    if (r.h <= 9) cout << "0";
    cout << r.h << ":";
    if (r.m <= 9) cout << "0";
    cout << r.m << ":";
    if (r.s <= 9) cout << "0";
    cout << r.s << endl;
}