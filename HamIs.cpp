#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char ch;
    cin >> ch;
    if(isalpha(ch)){
        cout << char(toupper(ch)) << endl;
    } else if(isdigit(ch)){
        cout << ch << endl;
    } else {
        cout << ch << endl;
    }
    return 0;
}