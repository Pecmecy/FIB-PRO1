#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {   
        string name;
        vector<string> v;
        cin >> name;
        v.push_back(name);
        for (int i = 1; i < n; ++i) {
            bool diferente = true;
            cin >> name;
            int j = 0;
            while (diferente and j < v.size()) {
                if (name == v[j]) diferente = false;
                ++j;
            }
            if (diferente) v.push_back(name);
        }
        for (int k = 0; k < v.size(); ++k) cout << v[k] << endl;
        cout << endl;
    }
}