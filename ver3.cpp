#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    if (input == "a") {
        cout << "____" << endl;
    } else if (input == "b") {
        cout << "___" << endl;
    } else if (input == "c") {
        cout << "___" << endl;
    } else {
        cout << "____" << endl;
    }

    return 0;
}
