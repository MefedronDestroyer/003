#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> na = { 45, -106, 45, -98, 99, 10, -96, 37, 56, -1, 45, 41, -73, 92, 5, 55, -111, 122, -4, -7 };
    cout << "Chisla + : ";
    for (int na : na) {
        if (na > 0) {
            cout << na << " ";
        }
    }
    cout << endl;
    cout << "Chisla - : ";
    for (int na : na) {
        if (na < 0) {
            cout << na << " ";
        }
    }
    cout << endl;

    return 0;
}