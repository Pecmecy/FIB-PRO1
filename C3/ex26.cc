#include <iostream>
#include <vector>

using namespace std;

struct Things {
    string name;
    string color;
    string poison;
    string burns;
    double height;
};

typedef vector<Things> Forest;

void read_data(Forest& v) {
    // ADD YOUR CODE HERE 
}

int count(const Forest& v, string name, string color,
          string poison, string burns, double height) {
    // ADD YOUR CODE HERE 
}

int main() {
    Forest v;
    read_data(v);
    
    // ADD YOUR CODE HERE 
}