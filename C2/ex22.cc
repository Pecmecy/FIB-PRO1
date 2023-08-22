#include <iostream>
#include <vector>
using namespace std;

//Pre: lista de n reales.
//Post: cierto si la lista contiene un elemento mas grande que 2x o mas pequeño que x/2.
bool find_element(const vector<double>& v, double x, double &e) {
    for (int i = v.size() - 1; i > -1; --i) {
        if (v[i] >= 2*x or v[i] <= x/2) {
            e = v[i];
            return true;
        }
    }
    return false;
}

int main() {
   cout.setf(ios::fixed); 
   cout.precision(2);
   int n;
   cin >> n;
   vector<double> v(n);

   double mean = 0;
   for (int i = 0; i < n; ++i) {
       cin >> v[i];
       mean = v[i] + mean;
   }
   mean = mean/n;
   
   double elem;
   bool found = find_element(v,mean,elem);
   if (found) cout << elem << endl;
   else cout << "not found" << endl;
}