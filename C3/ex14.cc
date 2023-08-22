#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Tren {
    string id_tren;
    string destino;
    string hora;
};

struct InfDest {
    string destino;
    string primer_id;
    int freq;
};


//pre: m > 0  es el numero de destinos y v es el vector de trenes
//     con la info de cada <Tren>. El vector v no es vacio y esta 
//     ordenado por (1) criterio principal: destino
//     (2) criterio secundario: hora    (3) último criterio:
//     identificador de tren.
//     
//
//post: construye un vector de  <InfDest>  con la info recogida
//      de cada destino, su frecuencia y su primer tren
vector<InfDest> crea_v_inf_dest(const vector<Tren>& v, int m) {
    vector<InfDest> w(m);
    int n = v.size();
    int j = 0;
    for (int i = 0; i < m; ++i) {
        string hora = v[j].hora;
        w[i].destino = v[j].destino;
        w[i].primer_id = v[j].id_tren;
        w[i].freq = 1;
        ++j;
        while (j < n and v[j].destino == v[j-1].destino) {
            ++w[i].freq;
            if (v[j].hora < hora) w[i].primer_id = v[j].id_tren;
            ++j;
        }
    }
    return w;
} 


//lectura de los datos de todos los trenes.
//Pre: entero n >= 0
//Post: vector de trenes sin ordenar.
vector<Tren> lee_info_trenes(int n) {
    vector<Tren> t(n);
    for (int i = 0; i < n; ++i) cin >> t[i].id_tren >> t[i].destino >> t[i].hora;
    return t;
}

bool cmp_tren(const Tren& a, const Tren& b) {
    if (a.destino != b.destino) return a.destino < b.destino;
    if (a.hora != b.hora) return a.hora < b.hora;
    else return a.id_tren < b.id_tren;
    
}

bool cmp_inf_dest(const InfDest& a, const InfDest& b) {
    if (a.freq != b.freq) return a.freq > b.freq;
    else return a.destino < b.destino;
}

void escribir_resultados(const vector<InfDest>& v) {
    for (int i = 0; i < v.size(); ++i) cout <<  v[i].destino << " " << v[i].freq << " " << v[i].primer_id << endl;
}

/*void escribir_lista(const vector<Tren>& t) {
    for (int i = 0; i < t.size(); ++i) cout << t[i].id_tren << " " << t[i].destino << " " << t[i].hora << endl;
}
*/

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<Tren> v_tren = lee_info_trenes(n);
    sort(v_tren.begin(), v_tren.end(), cmp_tren);
    vector<InfDest> v_inf_dest = crea_v_inf_dest(v_tren, m);
    sort(v_inf_dest.begin(), v_inf_dest.end(), cmp_inf_dest);
    escribir_resultados(v_inf_dest);
}
