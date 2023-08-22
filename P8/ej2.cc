#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;
//Pre: dos matrices cuadradas a y b;
//Post: matrix resultado del producto de a y b;
Matrix product (const Matrix& a, const Matrix& b) {
    int l = a.size();
    Matrix C(l, vector<int>(l,0));
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < l; ++j) {
            for (int k = 0; k < l; ++k) {
                C[i][j] = C[i][j] + a[i][k] *  b[k][j];
            }
        }
    }
    return C;
}

int main() {
    int n;
    while (cin >> n) {
        Matrix A(n, vector<int>(n));
        Matrix B(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> A[i][j];
            }   
        }
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> B[i][j];
            }
        }
        Matrix C = product(A, B);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}