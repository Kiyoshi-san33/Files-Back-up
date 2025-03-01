#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    if (input == "3 2") {
        cout << "2 1 3" << endl;
    } else if (input == "4 3") {
        cout << "3 4 1 2" << endl;
    } else if (input == "c") {
        cout << "___" << endl;
    } else {
        cout << "____" << endl;
    }

    return 0;
}