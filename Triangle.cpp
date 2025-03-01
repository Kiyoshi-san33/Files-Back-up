#include <iostream>
#include <algorithm>
using namespace std;

bool la_tam_giac(double a, double b, double c){
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool la_tam_giac_can(double a, double b, double c){
    return la_tam_giac(a, b, c) && (a == b || b == c || c == a);
}

bool la_tam_giac_deu(double a, double b, double c){
    return la_tam_giac(a, b, c) && (a == b && b == c) ;
}

bool la_tam_giac_vg(double a, double b, double c){
    double sides[] = {a, b, c};
    sort(sides, sides + 3);
    return la_tam_giac(a, b, c) && (sides[2] * sides[2] == sides[0] * sides[0] + sides[1] * sides[1]); 
}

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    if (!la_tam_giac(a, b, c)){
        cout << "Khong phai la tam giac" << endl;
    } else if (la_tam_giac_deu(a, b, c)){
        cout << "Day la mot tam giac deu" << endl;
    } else if (la_tam_giac_vg(a, b, c)){
        cout << "Day la mot tam giac vg" << endl;
    } else if (la_tam_giac_can(a, b, c)){
        cout << "Day la mot tam giac can" << endl;
    } else if (la_tam_giac_can(a, b, c) && la_tam_giac_vg(a, b, c)){
        cout << "Day la mot tam giac vg can" << endl;
    } else {
        cout << "Day la mot tam giac" << endl;
    }
    return 0;
}
