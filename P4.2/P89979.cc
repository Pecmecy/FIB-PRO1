#include <iostream>
using namespace std;

// Input: numero 'n' y n palabras.
// Output: numero de la línea cuyas palabras están ordenadas lexicográficamente.

int main() {
    string word, prevw;
    bool increase = false;
    int n, contador = 1;
    while (cin >> n and not increase) {
        increase = true;
        cin >> prevw;
        for (int i =1; i < n; ++i) {
            cin >> word;
            if (word < prevw) increase = false;
            prevw = word;
        }
        if (increase) cout << "The first line in increasing order is " << contador << "." << endl;
        ++contador;
    }
    if (not increase) cout << "There is no line in increasing order." << endl;
}