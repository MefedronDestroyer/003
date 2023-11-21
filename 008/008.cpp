#include <iostream>
using namespace std;
int main() {
    int n;
    int v = 0;
    int s = 0;
    cout << "Vvedite chisla (0 = zavershenie):" << endl;
    do {
        cout << "Vvedite chislo: ";
        cin >> n;
        if (n != 0) {
            s += n;
            v++;
        }
    } while (n != 0);
    if (v > 0) {
        double a = static_cast<double>(s) / v;

        cout << "Kol-vo chisel: " << v << endl;
        cout << "Summa: " << s << endl;
        cout << "Srednee znachenie: " << a << endl;
    }
    else {
        cout << "Chisel net." << endl;
    }

    return 0;
}