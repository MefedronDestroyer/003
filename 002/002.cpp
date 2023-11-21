#include <iostream>

using namespace std;

void main()
{
    cout << "vvedite predel: ";
    int x5, c = 0; cin >> x5;
    for (int q = 0; q <= (x5); q++)
    {
        c += q;
    }
    cout << c;
}