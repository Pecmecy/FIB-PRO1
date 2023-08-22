#include <iostream>
using namespace std;

//Input: Input consists of a sequence of lines with words. 
//Each line begins with a number n, followed by n words made up of only lowercase letters.
//Output: Print the index of the last line with the words in (not necessary strictly) increasing order. 
//If there is no such line, tell so. Follow the format of the examples.

int main() {
    string word, prevw;
    int n,lastline = 0, contador = 1; //lastline guarda el valor de la última línea en orden.
    while (cin >> n) {
        bool increase = true;
        if (n > 0) cin >> prevw;
        for (int i =1; i < n; ++i) {
            cin >> word;
            if (word < prevw) increase = false; //si la línea no está en orden increase cambia a falso y el if de lastline no se realiza.
            prevw = word;
        }
        if (increase) lastline = contador; //lastline es la línea actual que está en orden lexicográfico.
        ++contador;
    }
    if (lastline != 0) cout << "The last line in increasing order is " << lastline << "." << endl; //si lastline != 0 entonces significa que existe una línea en orden.
    else cout << "There is no line in increasing order." << endl;
}