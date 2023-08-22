#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    int suma;
    while (c != '.') {
        if (c >= char(0) and c <= char(9)) suma = suma + c - '0'; 
        cin >> c;