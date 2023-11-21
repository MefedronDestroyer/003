#include <iostream>
using namespace std;
int main()
{
    cout << "Razmer massiva: ";
    int n, s = 0;
    cin >> n;
    int* ms = new int[n];
    cout << "Chisla v massive:" << endl;
    for (int q = 0; q < n; q++) {
        cout << q + 1 << " chislo: ";
        cin >> ms[q];
    }
    for (int q = 0; q < n; q++) {
        cout << ms[q] << " ";
    }
    cout << endl;
    for (int q = 0; q < n; q++) {
        if (ms[q] % 3 == 0) {
            s += ms[q];
        }
    }
    cout << "Chisel kratnih 3: " << s << endl;
    return 0;
}