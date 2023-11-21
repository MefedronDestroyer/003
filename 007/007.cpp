#include <iostream>
using namespace std;
int main() {
    long long r = 1;
    for (int q = 2; q <= 10; ++q) {
        int s = 0;
        for (int k = 1; k <= q; ++k) {
            s += k;
        }
        r += s;
    }
    cout << "Result : " << r << endl;
    return 0;
}