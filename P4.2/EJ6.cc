#include <iostream>
using namespace std;

//Input: Input consists of a natural number n≥ 1, followed by 2n natural numbers a1, b1, …, an, bn: 
//a1 is the first number of Anna, b1 is the first number of Bernard, a2 is the second number of Anna, etcetera.
//Output: Print ‘A’, ‘B’, or ‘=’, depending on whether Anna wins, Bernard wins, or it is a tie.

int main () {
    int n, actnum, ininum, contador = 1, numdig = 0;
    cin >> n >> ininum;
    if (ininum > 9) {
        int aux = ininum;
        while (aux > 0) {
            aux = aux/10;
            ++numdig;
        }
    }
    if (numdig%2 == 0) cout << "B" << endl;
    else {
        for (int i = 0; i < numdig/2; ++i) ininum = ininum/10;
        ininum = ininum%10;
    }
    bool diferent = false;
    while (contador <= 2*n or not diferent) {
        cin >> actnum;
        numdig = 0;
        if (actnum > 9) {
            int aux = actnum;
            while (aux > 0) {
                aux = aux/10;
                ++numdig;
            }
        }
        if (numdig%2 == 0) diferent = true;
        else {
            for (int j = 0; j < numdig/2; ++j) actnum = actnum/10;
            actnum = actnum%10;
        }
        if (actnum == ininum) ++contador;
        else diferent = true;
    }
    if (contador > 2*n) cout << "=" << endl;
    else if (diferent and contador%2 == 0) cout << contador << endl;
    else if (diferent and contador%2 != 0) cout << "A" << endl;
}












/*
int main() {
    int n, actnum, ininum, contador = 1, numdig = 0;
    cin >> n >> ininum;
    if (ininum > 9) {
        int aux = ininum;
        while (aux > 0) {
            aux = aux/10;
            ++numdig;
        }
        if (numdig%2 == 0) cout << "B" << endl;
        else {
            for (int i = 0; i < numdig/2; ++i) ininum = ininum/10;
            ininum = ininum%10;
        }
    }
    bool diferent = false;
    numdig = 0;
    int aux;
    while (contador <= 2*n and not diferent) {
        cin >> actnum;
        if (actnum > 9) {
        numdig = 0, aux = actnum;
        while (aux > 0) {
            aux = aux/10;
            ++numdig;
            }
        }
        if (numdig%2 == 0) diferent = true;
        else {
            for (int i = 0; i < numdig/2; ++i) actnum = actnum/10;
            actnum = actnum%10;
            if (actnum == ininum) ++contador;
            else diferent = true;
        }
    }
    if (contador > 2*n) cout << "=" << endl;
    else if (diferent and contador%2 == 0) cout << contador << endl;
    else if (diferent and contador%2 != 0) cout << "A" << endl;
}
*/