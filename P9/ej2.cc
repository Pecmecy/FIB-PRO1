#include <iostream>
using namespace std;

struct Time {
    int hour, minute, second; // 0 <= h < 24; 0 <= m,s < 60.
};

//Input: hora en formato hh mm ss.
//Output: t1 = hora más un segundo. t2 = hora menos un segundo.
void one_second(const Time& t, Time& t1, Time& t2) {
    if (t.second == 59) {
        t1.second = 0;
        if (t.minute == 59) {
            t1.minute = 0;
            if (t.hour == 23) t1.hour = 0;
            else t1.hour = t.hour + 1;
        }
        else {
            t1.minute = t.minute + 1;
            t1.hour = t.hour;
        }
    }
    else {
        t1.second = t.second + 1;
        t1.minute = t.minute;
        t1.hour = t.hour;
    }
    cout << t1.hour << " " << t1.minute << " " << t1.second << endl;

    if (t.second == 0) {
        t2.second = 59;
        if (t.minute == 0) {
            t2.minute = 59;
            if (t.hour == 0) t2.hour = 23;
            else t2.hour = t.hour - 1;
        }
        else {
            t2.minute = t.minute -1;
            t2.hour = t.hour;
        }
    }
    else {
        t2.second = t.second -1;
        t2.minute = t.minute;
        t2.hour = t.hour;
    }
    cout << t2.hour << " " << t2.minute << " " << t2.second << endl;
}

int main() {
    Time t, t1, t2;
    int hour, minute, second;
    while (cin >> hour) {
        cin >> minute >> second;
        t.hour = hour;
        t.minute = minute;
        t.second = second;
        one_second(t, t1, t2);
    }
}