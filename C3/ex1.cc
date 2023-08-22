#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matrix;
void transpose(Matrix& M) {
    int i = 0;
    while (i < M.size()) {
        int j = i + 1;
        while (j < M.size()) {
            int aux = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = aux;
            ++j;
        }
        ++i;
    }
}


int main () {
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        transpose(M);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
