#include <iostream>

using namespace std;

int main() {
    string first_name, last_name;
    cout << "Please enter your first name: ";
    cin >> first_name;
    cout << "Please enter your last name: ";
    cin >> last_name;
    string full_name;
    full_name = first_name + " " + last_name;
    cout << "Hello, " << full_name << endl;
    return 0;
}