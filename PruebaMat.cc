#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string word;
    vector<string> v(n);

//vector de entrada y reversion de cada palabara que entra
    for (int i = n-1; i >= 0; --i){
        cin >> word;
        for(int j = 0; j < word.size()/2; ++j){
            int aux = word[j];
            word[j] = word[word.size() - 1 - j];
            word[word.size() - 1 - j] = aux;
        }
        v[i]=word;
    }
    //vector de salida con todos ya revertido, tanto el orden como las palabaras.
    for (int i = 0; i < n; ++i){
        cout << v[i] << endl;
    }
}