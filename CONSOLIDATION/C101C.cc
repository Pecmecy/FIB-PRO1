#include <iostream>
using namespace std;

int main() {
    char n;
    cin >> n;
    string frase;
    if (n>='0' and n<='9') frase = "digit";
    else if (n >= 'A' and n <= 'z') frase = "lletra";
    else frase = "res";
    cout << frase << endl;
}