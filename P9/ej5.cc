#include <iostream>
#include <vector>
using namespace std;
 
vector<double> diferencia(const vector<double>& v1, const vector<double>& v2) {
        int s1 = v1.size();
        int s2 = v2.size();
        vector<double> aux(s1);
        int i, j, k;
        i = j = k = 0;
        while (i < s1 and j < s2) {
                if (v1[i] < v2[j]) {
                        if (k == 0 or v1[i] != aux[k-1]) {
                                aux[k] = v1[i];
                                ++k;
                        }
                        ++i;
                }
                else if (v1[i] > v2[j]) ++j;
                else ++i;
        }
        while (i < s1) {
                if (k == 0 or aux[k-1] != v1[i]) {
                        aux[k] = v1[i];
                        ++k;
                }
                ++i;
        }
        vector<double> dif(k);
        for (i = 0; i < k; ++i) dif[i] = aux[i];
        return dif;
}