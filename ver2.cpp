#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printExpected(int input) {
    if (input == a) {
        cout << "________" << endl;
    } else if (input == b) {
        cout << "________" << endl;
    } else if (input == c) {
        cout << "________" << endl;
    } else {
        cout << "Input không hợp lệ hoặc chưa được định nghĩa." << std::endl;
    }
}

int main() {
    int input;
    cin >> input;

    printExpected(input);

    return 0;
}
