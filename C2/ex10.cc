#include <iostream>
using namespace std;

// Pre: c is a lowercase letter
// Post: returns  true when c is a vowel,  returns false otherwise
bool es_vocal(char c) {
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'; 
}

// Pre: a lowercase letter sequence in the input
// Post: in the output appears  first input consonants in the same order, 
//       then vowels in reverse order
/* Funcionamiento: la función mira si puede hacer cin del caracter "c". En caso de que pueda, lo hace y entra en el caso recursivo (el caso base sería cuando no hay caracer a introducir por lo que no se escribe.)
Dentro del caso recursivo se comprueba con la función es_vocal si es una vocal o no. En caso de serlo (primer if) se hace la llamada recursiva que hace cin del siguiente caracter introducido. Esto se hará hasta que
se encuentre una consonante, en cuyo caso se imprime por orden de aparición y se vuelve a hacer la llamada recursiva para el siguiente caracter. Una vez se han impreso todas las consonantes el programa "vuelve hacia
atrás" e imprime, en orden contrario, las vocales siguiendo el cout del if (es_vocal). Para que las imprima es necesario hacer control + D ya que no tenemos ninguna herramienta para decirle expresamente al código
que no hay más entradas a leer. EL mismo esquema sirve para el ejercicio de letras y símbolos.
*/
void consonantes_vocales() {
    char c;
    if (cin >> c) {
        if (es_vocal(c)) {
            consonantes_vocales();
            cout << c;
        }
        else {
            cout << c;
            consonantes_vocales();
        }
    }
}

int main() {
    consonantes_vocales();
    cout << endl;
}