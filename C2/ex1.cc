#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int ant, act, cont, contrep, pos, posrep, posdef;
        cont = contrep = 1; //Ambos contadores comienzan en 1 ya que el primer número cuenta como primera repetición/aparición en la cadena.
        pos = posrep = posdef = 1; //Seguimiento de la posición en la que estamos y posición del número repetido, comienza en 1.
        cin >> ant >> act;
        while (act != -1) {
            if (ant == act) ++cont; //Si son iguales se suma 1 al contador. Si son diferentes el contador se reinicia.
            else {
                cont = 1;
                posrep = pos + 1;
            }
            if (cont > contrep) {
                contrep = cont; //Si se ha repetido más veces un número que el anterior repetido el contador se actualiza al mayor.
                posdef = posrep;
            }
            ant = act;
            cin >> act;
            ++pos;
        }
        cout << posdef << " " << contrep << endl;
    }
}