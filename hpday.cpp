//Một cửa hàng đặt ra mục tiêu là phải bán được một số lượng sản phẩm nhất định trong một ngày. 
//Mỗi ngày cửa hàng này sẽ ghi lại số chênh lệch giữa sản phẩm bán được và mục tiêu đã đề ra. 
//Các số liệu được lưu trữ tối đa trong vòng 30 ngày.
//Viết một chương trình nhập vào số ngày theo dõi n và độ chênh lệch theo từng ngày. 
//Ngày đầu tiên được tính là ngày 1, in ra màn hình những ngày bán được sản phẩm nhiều hơn hoặc bằng mục tiêu đề ra.
//Đầu vào: số ngày n và n số nguyên biểu diễn độ chênh lệch theo từng ngày.
//Đầu ra: In ra những ngày bán được sản phẩm nhiều hơn hoặc bằng mục tiêu (tính từ ngày 1).
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n > 30 || n <= 0) {
        return 0;
    }

    vector <int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    bool f = false;
    for(int i = 0; i < n; ++i){
        if(a[i] >= 0){
            cout << (i + 1) << " ";
            f = true;
        }
    }

    if (!f) {
        cout << "Không có ngày nào." << endl;
    }

    return 0;
}
