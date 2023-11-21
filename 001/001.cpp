
#include <iostream>

using namespace std;

int main() {
    int s = 0;
    int q = 100;
    int ms[10] = { 1,6,3,7,2,7,9,2,6,10 };

    for (int f = 0; f < 10; f++) {
        if (ms[f] < q) {
            q = ms[f];
            s += 1;
        }

    }

    cout << "Naimenshee chislo: " << q;
    cout << "Povtorov: " << s;
    return 0;
}