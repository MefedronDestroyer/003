#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        cout << "[1] Treugolnik  [2] Trapecia: " << endl;
        int h; cin >> h;

        cout << "Vvedite visotu: " << endl;
        int v; cin >> v;
        if (h == 1) {
            for (int q = 0; q < v; q++) {
                for (int s = 0; s < v - q - 1; s++) {
                    cout << " ";
                }
                for (int s = 0; s < 2 * q + 1; s++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (h == 2) {
            for (int q = 0; q < v; q++) {
                for (int s = 0; s < v - q - 1; s++) {
                    cout << " ";
                }
                for (int k = 0; k < 2 * (q + 1) + 1; k++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
    }
    
}