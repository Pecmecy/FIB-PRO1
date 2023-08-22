#include <iostream>
#include <vector>
using namespace std;

struct Asignatura {
    int id;
    double creditos;
    double nota;
};

struct Alumno {
    int dni;
    vector <Asignatura> asigs;
};

typedef vector <Alumno> Alumnos;

// Pre: --
// Post: retorna el número d'alumnes a alus que superen el factor alfa
int supera_alfa(const Alumnos& alus) {
    int aprobados = 0;
    int n = alus.size();
    for (int i = 0; i < n; ++i) {
        double media = 0;
        double ponderar = 0;
        int m = alus[i].asigs.size();
        for (int j = 0; j < m; ++j) {
            media = media + alus[i].asigs[j].creditos * alus[i].asigs[j].nota;
            ponderar = ponderar + alus[i].asigs[j].creditos;
        }
        if ((media/ponderar) >= 5) ++aprobados; 
    }
    return aprobados;
}

// Pre: en la entrada hay la información de m asignaturas
// Post: retorna un vector de Asignatura con la información de la entrada,
//          manteniendo el orden de aparición.
vector <Asignatura> lee_asignaturas(int m) {
    vector<Asignatura> v(m);
    for (int i = 0; i < m; ++i) cin >> v[i].id >> v[i].creditos >> v[i].nota;
    return v;
}

int main() {
    int n;
    cin >> n;
    Alumnos a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].dni;
        int m;
        cin >> m;
        a[i].asigs = lee_asignaturas(m);
    }
    cout << supera_alfa(a) << endl;
}