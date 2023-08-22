#include <iostream>
using namespace std;


//Pre: dos tiempos en segundos.
//Post: diferencia de tiempo entre time_1 y time_2.
int time_lapse(int time_1, int time_2) {
    int time_elapsed = time_2 - time_1;
    if (time_elapsed < 0) return time_elapsed + 60;
    else if (time_elapsed == 0) return 60;
    else return time_elapsed ;
}

int main() {
    int a, b, lapse;
    lapse = 0;
    cin >> a >> b;
    lapse = time_lapse(a, b);
    a = b;
    cin >> b;
    bool diferentes = false;
    if (b == -1) cout << lapse << endl;
    else {
        while (!diferentes and b != -1) {
            if (lapse != time_lapse(a, b)) diferentes = true;
            else {
                a = b;
                cin >> b;
            }
        }
        if (!diferentes) cout << lapse << endl;
        else cout << 0 << endl;  
    }
}