#include <iostream>
#include <vector>
using namespace std;

struct Player {
    string name;
    double score;     // mean score
};

struct Team {
    string tname;
    Player mvp;       // most valuable player
};

typedef vector<Team> League;

// add here struct and type definitions
// (...)

League read_data(int n) {
    League l(n);
    for (int i = 0; i < n; ++i) cin >> l[i].tname >> l[i].mvp.name >> l[i].mvp.score;
    return l;
}

int main() {
    int n;
    cin >> n;
    League league = read_data(n);
    char c;
    double s;
    while (cin >> c >> s) {
        cout << "-- begin query" << endl;
        for (int i = 0; i < n; ++i) {
            if (league[i].tname[0] == c and league[i].mvp.score > s) cout << league[i].mvp.name << endl;
        }
        cout << "-- end query" << endl;
    }
}