// Đầu vào: Số nguyên dương n là số số nguyên và n số nguyên bất kỳ.
//Đầu ra: In ra màn hình dòng chữ 've found the meaning of life! nếu trong n số nguyên có số 42, ngược lại in ra dòng chữ It's a joke!.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    bool e = false;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 42) {
            e = true;
        }
    }

    if (e) {
        cout << "I've found the meaning of life!" << endl;
    } else {
        cout << "It's a joke!" << endl;
    }

    return 0;
}

