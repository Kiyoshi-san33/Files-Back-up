// Từ bài toán dân gian trên, mở rộng thành chương trình nhận đầu vào là tổng số con và tổng số chân của gà và chó.
// Nếu tìm được số phù hợp, in ra số lượng gà và số lượng chó. Ngược lại, in ra "invalid"
// Đầu vào: Hai số nguyên lần lượt là tổng số con và tổng số chân của gà và chó.
// Đầu ra: Số lượng gà và số lượng chó phù hợp. Nếu không có, in ra "invalid".

#include <iostream>
using namespace std;

void c(int a,int b){
    for(int ga = 0; ga < a; ++ga){
        int cho = a - ga;
        if(ga*2 + cho *4 == b){
            cout << "Chicken = " << ga << ", " << "Dog = " << cho << endl;
            return;
        }
    }
    cout << "Invalid" << endl;
}

int main(){
    int a, b;
    cin >> a >> b;
    c(a, b);
    return 0;
}