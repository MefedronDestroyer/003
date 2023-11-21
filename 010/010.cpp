#include <iostream>
using namespace std;
int main() {
    int p;
    double r;

    cout << "Vvedite edinicu perevoda:\n";
    cout << "1. Sazheney v m\n";
    cout << "2. Duimy v sm\n";
    cout << "3. Futy v m\n";
    cout << "4. Drahmy v g\n";
    cout << "5. Unciy v g\n";
    cout << "6. Funty d kg\n";
    cout << "7. Arshiny v m\n";
    cout << "8. Zolotniki v g\n";
    cout << "9. Duimy v mm\n";

    cin >> p;

    cout << "Vvedite perevodimoe znachenie: ";
    cin >> r;

    while (true)
    {
        if (p == 1) {
            cout << r << " sazheney = " << r * 2.1366 << " m\n";

        }
        else if (p == 2) {
            cout << r << " duimov = " << r * 2.5 << " sm\n";
        }
        else if (p == 3) {
            cout << r << " futov = " << r * 0.3048 << " m\n";
        }
        else if (p == 4) {
            cout << r << " drahm = " << r * 3.7325 << " g\n";
        }
        else if (p == 5) {
            cout << r << " unciy = " << r * 29.86 << " g\n";
        }
        else if (p == 6) {
            cout << r << " funtov = " << r * 0.40951 << " kg\n";
        }
        else if (p == 7) {
            cout << r << " arshinov = " << r * 0.7112 << " m\n";
        }
        else if (p == 8) {
            cout << r << " zolotnikov = " << r * 4.2657 << " g\n";
        }
        else if (p == 9) {
            cout << r << " duimov = " << r * 25.3995 << " mm\n";
        }
        else if (p == 9) {
            cout << r << " duimov = " << r * 25.3995 << " mm\n";
        }
        break;
    }
}