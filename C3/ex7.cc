#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Flag;

//llenar matriz.
Flag read_flag(int n) {
    Flag f(n, Row(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> f[i][j];
    }
    return f;
}

void print_flag(const Flag& f) {
    for (int i = 0; i < f.size(); ++i) {
        for (int j = 0; j < f.size(); ++j) cout << f[i][j];
        cout << endl;
    }
}

void print_cont(int n) {
    cout << n << endl;
}

int column_count(const Flag& f) {
    int n = f.size();
    int k = n - 1;
    int cont = 0;
    for (int j = 0; j < n; ++j) {
        int contcolumn = 0;
        bool fuera = false;
        for (int i = n-1; i > 0; --i) {
            if (f[i][j] != f[i-1][j]) {
                if (i < k) fuera = true;
                ++contcolumn;
            }
        }
        if (contcolumn == 1 and !fuera) ++cont;
        //print_cont(cont);
        --k;
    }
    return cont;
}

int main() {
    int n;
    while (cin >> n) {
        Flag flag = read_flag(n);
        cout << column_count(flag) << endl;
        //print_flag(flag);
    }
}