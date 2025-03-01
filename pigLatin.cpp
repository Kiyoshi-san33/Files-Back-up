#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string pigLatin(string word) {
    if (isVowel(word[0])) {
        return word + "way";
    }
    
    int firstVowelIndex = -1;
    for (int i = 0; i < word.size(); i++) {
        if (isVowel(word[i])) {
            firstVowelIndex = i;
            break;
        }
    }
    
    if (firstVowelIndex == -1) {
        return word + "ay";
    }
    
    string prefix = word.substr(0, firstVowelIndex);
    string suffix = word.substr(firstVowelIndex);
    return suffix + prefix + "ay";
}

int main() {
    string word;
    cout << "Nhap mot tu Tieng Anh: ";
    cin >> word;
    cout << "Tu Pig Latin: " << pigLatin(word) << endl;
    return 0;
}
