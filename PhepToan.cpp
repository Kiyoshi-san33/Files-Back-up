#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Nhap so nguyen thu nhat: ";
    cin >> a;

    cout << "Nhap so nguyen thu hai: ";
    cin >> b;

    cout << "Nhap phep toan (+, -, *, /): ";
    cin >> op;
    
    if (op == '+') {
        cout << "Phep toan la: " << a << " + " << b << " = " << a + b << endl;
    } else if (op == '-') {
        cout << "Phep toan la: " << a << " - " << b << " = " << a - b << endl;
    } else if (op == '*') {
        cout << "Phep toan la: " << a << " * " << b << " = " << a * b << endl;
    } else if (op == '/') {
        if (b != 0) {
            cout << "Phep toan la: " << a << " / " << b << " = " << (float)a / b << endl;
        } else {
            cout << "Khong the chia cho 0." << endl;
        }
    } else {
        cout << "Phep toan khong hop le." << endl;
    }
}