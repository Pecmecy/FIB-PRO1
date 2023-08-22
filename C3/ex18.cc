#include <iostream>
#include <vector>
#include <string>
using namespace std;
             
// some additional functions may be necessary here

bool is_lower(const string& a, const string& b) {
    if (a.length() != b.size()) return a.length() < b.length();
    else return a < b; 
}

//pre:  v is ordered according to string length first and then 
//      by usual string order. All strings are different.   
//post: returns the position of s in v. 
//      If s  is not in v, returns -1 
int effi_search(const vector<string>& v, const string& s) {
    int iz = 0;
    int de = v.size();
    while (iz <= de) {
        int mid = (iz + de)/2;
        if (v[mid] == s) return mid;
        else if (is_lower(v[mid], s)) iz = mid + 1;
        else de = mid - 1;
    }
    return -1;
}


int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    string s;
    while (cin >> s) 
        cout << effi_search(v, s) << endl;
}

         