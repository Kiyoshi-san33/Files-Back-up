#include <iostream>
#include <string>
using namespace std;

long factorial(int n){
    if(n < 0){
        return -1;
    }

    long result = 1;
    for(int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}

int main(){
    int n;
    cout << "Nhap gioi han giai thua: ";
    cin >> n;
    if (n < 0) {
        cout << "Khong the tinh giai thua cho so am." << endl;
    } else {
        cout << "Giai thua cua " << n << " la: " << factorial(n) << endl;
    }
    return 0;
}
