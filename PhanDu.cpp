#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, tong = 0;

    for (cin >> a ; a != 0; cin >> a)
    {
     tong = tong + a;
    }
    cout << tong;
    return 0;
}
