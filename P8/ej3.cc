#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector<int> > Matrix;
Matrix product(const Matrix& a, const Matrix& b) {
    int p = a.size();
    int q = a[0].size();
    int r = b[0].size();
    Matrix C(p, vector<int>(q, 0));
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < r; ++j) {
            for (int k = 0; k < q; ++k) C[i][j] = C[i][j] + a[i][k] * b[k][j];
        }
    }
    return C;
}

int main() {
    int p, q, r;
    while (cin >> p >> q >> r) {
        Matrix A(p, vector<int>(q));
        Matrix B(q, vector<int>(r));
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < q; ++j) cin >> A[i][j];
        }
        
        for (int i = 0; i < q; ++i) {
            for (int j = 0; j < r; ++j) cin >> B[i][j];
        } 

        Matrix C = product(A, B);
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < r; ++j) cout << C[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
}