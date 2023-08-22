#include <iostream>
#include <string>
using namespace std;



// Pre: p, pref are strings of lowercase letters
// Post: returns true if pref is a prefix of p, false otherwise
bool prefix (const string & p, const string & pref) {
    int d = pref.size();
    int l = p.size();
    int i = 0;
    while (i < d and i < l and p[i] == pref[i]) ++i;
    return i == d;
}

int main() {
    int n, linea;
    linea = 0;
    while (cin >> n) {
        ++linea;
        string base;
        cin >> base;
        int cont = 1;
        for (int i = 1; i < n; ++i) {
            string prefijo;
            cin >> prefijo;
            if (prefix(base, prefijo)) ++cont;
        }
        cout << "Linea " << linea << ": " << cont << " - " << base << endl;
    }
}