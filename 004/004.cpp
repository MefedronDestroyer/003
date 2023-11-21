#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Razmer massiva: ";
    cin >> n;

    int X[8];

    cout << "Vvedite elementy massiva: ";
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }

    int mav = X[0];
    int miv = X[0];
    int mai = 0;
    int mii = 0;

    for (int i = 1; i < n; i++) {
        if (X[i] > mav) {
            mav = X[i];
            mai = i;
        }

        if (X[i] < miv) {
            miv = X[i];
            mii = i;
        }
    }

    cout << "Max znachenie: " << mav << endl;
    cout << "Max index: " << mai << endl;

    cout << "Min znachenie: " << miv << endl;
    cout << "Min index: " << mii << endl;

    return 0;
}