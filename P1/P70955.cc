#include <iostream>
using namespace std;

int main() {
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;
    d = d + (y * 365); //Coger y transformar todo a la unidad siguiente hasta los segundos.  
    h = h + (d * 24); //Ej.: Si hay 20 años (365 días cada uno) entonces 20 * 35 son los días de los 20 años. Sumados a los días dados en el cin da los días totales del input.
    m = m + (h * 60);
    s = s + (m * 60);

    cout << s << endl;
}