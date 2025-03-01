#include <iostream>
using namespace std;

string zodiacSign(int day, int month) {
    switch(month) {
        case 1:
            return (day <= 19) ? "Ma Ket" : "Bao Binh";
        case 2:
            return (day <= 18) ? "Bao Binh" : "Song Ngu";
        case 3:
            return (day <= 20) ? "Song Ngu" : "Bach Duong";
        case 4:
            return (day <= 19) ? "Bach Duong" : "Kim Nguu";
        case 5:
            return (day <= 20) ? "Kim Nguu" : "Song Tu";
        case 6:
            return (day <= 20) ? "Song Tu" : "Cu Giai";
        case 7:
            return (day <= 22) ? "Cu Giai" : "Su Tu";
        case 8:
            return (day <= 22) ? "Su Tu" : "Xu Nu";
        case 9:
            return (day <= 22) ? "Xu Nu" : "Thien Binh";
        case 10:
            return (day <= 22) ? "Thien Binh" : "Thien Yet";
        case 11:
            return (day <= 22) ? "Thien Yet" : "Nhan Ma";
        case 12:
            return (day <= 21) ? "Nhan Ma" : "Ma Ket";
        default:
            return "False";
    }
}

int main() {
    int day, month;
    cin >> day;
    cin >> month;

    string zodiac = zodiacSign(day, month);
    cout << zodiac << endl;

    return 0;
}