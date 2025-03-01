#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 
int main()
{
    float a, b, c, delta, x1, x2;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
    if(a == 0) {
        if (b == 0){
            if(c == 0){
                cout << "Pt co vo so nghiem" << endl;
            } else {
                cout << "Pt vo nghiem" << endl;
            }
        } else {
        cout << "Pt co nghiem duy nhat: x= " << -c/b << endl;
        }
    } else {
        delta = b*b - 4*a*c;
        if(delta > 0){
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            cout << "Nghiem thu nhat la: " << x1 << endl;
            cout << "Nghiem thu hai la: " << x2 << endl;
        } else if(delta == 0) {
            cout << "Pt co nghiem duy nhat: x1=x2= " << -b / (2*a) << endl;
        } else {
            cout << "Pt vo nghiem" << endl;
        }
    }
    return 0;
}

   