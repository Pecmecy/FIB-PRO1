#include <iostream>
#include <vector>
using namespace std;

struct Book {
    string title;       // título del libro
    int nb_pag;         // número de páginas del libro
};

struct Author {
    string name;        // nombre del autor
    Book bestseller;    // libro superventas
};

typedef vector<Author> Library;

//Lectura de los datos de los autores y libros.
//Pre: entero n >= 0.
//Post: vector con los datos de los autores y sus libros.
Library read_data(int n) {
    Library l(n);
    for (int i = 0; i < n; ++i) cin >> l[i].name >> l[i].bestseller.title >> l[i].bestseller.nb_pag;
    return l;
}

int main() {
    int n;
    cin >> n;
    Library lib = read_data(n);
    char c;
    int p;
    while (cin >> c >> p) {
        cout << "-- begin query" << endl;
        for (int i = 0; i < n; ++i) if (lib[i].bestseller.title[0] == c and lib[i].bestseller.nb_pag > p) cout << lib[i].name << endl;
        cout << "-- end query" << endl;
    }
}