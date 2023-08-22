#include <iostream>
using namespace std;


//Pre: enteros >= 0, <= 59;
//Post: tiempo transcurrido en segundos.
int time_lapse(int time_1, int time_2) {
    int dif = 0;
    if (time_2 == 0 or time_2 < time_1) time_2 += 60;
    if (time_1 == time_2) dif = 60;
    else dif = time_2 - time_1;
    return dif;
}

int main() {
    int k, timeant, timeact, totaltime, cont;
    cin >> k >> timeant >> timeact;
    totaltime = 0;
    cont = 2;
    bool found = false;
    while (timeact != -1 and !found) {
        totaltime = totaltime + time_lapse(timeant, timeact);
        if (k < totaltime) found = true;
        else {
            timeant = timeact;
            cin >> timeact;
            ++cont;
        }
    }
    if (!found) cout << 0 << endl;
    else cout << cont << endl;
}