// Khái quát, nếu n
// là số nguyên dương, gọi f(n)
// là số đôi thỏ có ở tháng thứ n, ta có:
// Với n≤2, f[n]=1.
// Với n>2, f[n]=f[n−1]+f[n−2].
// Viết chương trình tính số Fibonacci thứ n.
// Đầu vào: từ bàn phím, chứa duy nhất số nguyên dương n (n≤30).
// Đầu ra: In ra màn hình số Fibonacci thứ n.

#include <iostream>
using namespace std;

int f(int n){
    if(n <= 2){
        return 1;
    }
    return f(n-1) + f(n-2);
}

int main(){
    int n;
    cin >> n;
    if(n < 1 || n > 30){
        cout << "Invalid" << endl;
        return 1;
    }
    cout << f(n) << endl;
    return 0;
}
