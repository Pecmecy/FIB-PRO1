#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int ant, act, cont, menor; //menor es el número más pequeño que se ha encontrado en la secuencia hasta el momento.
        cin >> ant >> act;
        bool primeros = true; //booleano que solo será true para los primeros 2 elementos de la secuencia.
        cont = 0;
        menor = 9;
        while (act != 0) {
            if (ant < act and primeros) { //el caso de que sean los dos primeros números de la secuencia, en cuyo caso debe asegurarse de que se cumple la seegunda condición.
                menor = ant;
                ant = act;
                cin >> act;
                ++cont;
            }
            else if (act < ant and act < menor) {
                menor = act;
                ant = act;
                cin >> act; 
                if (act != 0 and act > ant) ++cont;
            }
            else {
                ant = act;
                cin >> act;
            }
            primeros = false;
        }
        cout << cont << endl;
    }
}