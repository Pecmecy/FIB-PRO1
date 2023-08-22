#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
  string artist, title, genre;
  int year;
};

bool comp(const Track &a, const Track &b) {
    if (a.artist != b.artist) return a.artist < b.artist;
    if (a.year != b.year) return a.year < b.year;
    else return a.title < b.title;
}

vector<Track> read_tracks(int n) {
    vector<Track> t(n);
    for (int i = 0; i < n; ++i) cin >> t[i].artist >> t[i].title >> t[i].genre >> t[i].year;
    return t;
}

void print_track(const Track &t) {
  cout << t.artist;
  cout << " (" << t.year;
  cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
    int n;
    cin >> n;
    vector<Track> tracks = read_tracks(n);
    sort(tracks.begin(), tracks.end(), comp);
    string genrelist;
    while (cin >> genrelist) {
    for (int i = 0; i < n; ++i) {
        if (tracks[i].genre == genrelist) print_track(tracks[i]);
        }
    }
}