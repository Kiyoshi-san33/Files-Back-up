#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cout << "Nhap so tu nhien: ";
    cin >> a;
    if(a % 2 == 0) {
        cout << a << " la so chan" << endl;
    } else {
        cout << a << " la so le" << endl;
    }
    return 0;
}

