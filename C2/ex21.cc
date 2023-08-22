#include <iostream>
using namespace std;

int main() {
    string word;
    bool encontrados = false;
    bool catboy = false; 
    bool owlette = false; 
    bool gekko = false;
    cin >> word;

    while (!encontrados) {
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
        else cin >> word;
    }
}