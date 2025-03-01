#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    if(a < b){
        cout << "Min la: " << a << endl; 

        cout << "Max la: " << b;
    } else {
        cout << "Min la: " << b << endl;

        cout << "Max la: " << a;
    return 0;
}  
}