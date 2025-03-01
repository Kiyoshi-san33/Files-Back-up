//Viết chương trình nhập vào số nguyên n và n số nguyên không âm. 
//In ra trên từng dòng màn hình giá trị của phần tử và số lần xuất hiện của phần tử đó (cách nhau bởi dấu cách) theo thứ tự xuất hiện của phần tử đó.
//Đầu vào:
//Dòng đầu tiên chứa số phần tử n;
//Dòng tiếp theo chứa n số nguyên dương.
//Đầu ra: 
//In ra giá trị và tần số xuất hiện của phần tử đó trong dãy theo thứ tự xuất hiện của phần tử đó. Mỗi số được in trên một dòng

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Nhập số phần tử của dãy
    vector<int> a(n); // Mảng chứa các số nguyên dương
    unordered_map<int, int> freq; // Bảng đếm tần suất các phần tử
    vector<int> order; // Ghi nhớ thứ tự xuất hiện của các phần tử

    // Đọc các phần tử và xử lý
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (freq[a[i]] == 0) { // Nếu phần tử xuất hiện lần đầu
            order.push_back(a[i]); // Thêm vào thứ tự xuất hiện
        }
        freq[a[i]]++; // Tăng tần suất
    }

    // In ra kết quả
    for (int b : order) {
        cout << b << " " << freq[b] << endl;
    }

    return 0;
}
