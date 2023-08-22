#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int right;
    int wrong;
};


vector<int> read_right_answers(int m) {
    vector<int> v(m);
    for (int i = 0; i < m; ++i) cin >> v[i];
    return v;
}

void get_student_result(Student& a, const vector<int>& v, int m) {
    cin >> a.name;
    int respuesta;
    for (int i = 0; i < m; ++i) {
        cin >> respuesta;
        if (respuesta != 0 and respuesta == v[i]) ++a.right;
        else if (respuesta != 0 and respuesta != v[i]) ++a.wrong;
    }
}

vector<Student> get_info_test(const vector<int>& answer, int n) {
    int m = answer.size();
    vector<Student> v(n);
    for (int i = 0; i < n; ++i) get_student_result(v[i], answer, m);
    return v;
}

void write_results(const vector<Student>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cout << v[i].name << " " << v[i].right << " " << v[i].wrong << endl;
}

int get_mark(const Student& a) {
    int mark = a.right * 2 - a.wrong;
    return mark;
}

bool cmp(const Student& a, const Student& b) {
    int nota1 = get_mark(a);
    int nota2 = get_mark(b);
    if (nota1 != nota2) return nota1 > nota2;
    if (a.wrong != b.wrong) return a.wrong < b.wrong;
    else return a.name < b.name;
}

int main() {
    int m;
    cin >> m;
    vector<int> answer = read_right_answers(m);
    int n;
    cin >> n;
    vector<Student> v = get_info_test(answer, n);
    sort(v.begin(), v.end(), cmp);
    write_results(v);
}