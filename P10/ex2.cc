#include <iostream>
#include <vector>
using namespace std;

int position_maximum(const vector<double>& v, int m) {
    int pos = 0;
    double maxnum = v[0];
    for (int i = 0; i <= m; ++i) {
        if (v[i] > maxnum) {
            maxnum = v[i];
            pos = i;
        }
    }
    return pos;
}