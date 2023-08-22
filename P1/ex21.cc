#include <iostream>
using namespace std;

int main() {
    string word;
    bool encontrados, catboy, owlette, gekko = false;
    while (!encontrados) {
        cin >> word;
        if (!catboy and word == "Catboy") {
            cout << "Catboy" << endl;
            catboy = true;
        }

        if (!gekko and word == "Gekko") {
            cout << "Gekko" << endl;
            gekko = true;
        }

        if (!owlette and word == "Owlette") {
            cout << "Owlette" << endl;
            owlette = true;
        }

        if (catboy and owlette and gekko) encontrados = true;
    }
}