//Cho ma trận kích thước m×n chứa các số nguyên, các hàng được đánh số từ 1 đến m, các cột được đánh số từ 1 đến n. 
//Có Q câu hỏi, mỗi câu hỏi đưa ra 2 số i,j. 
//Nhiệm vụ của bạn là in ra giá trị của phần tử ở hàng thứ i và cột thứ j của ma trận.
//Đầu vào:
//Đầu vào từ bàn phím gồm m+Q+1 dòng.
//Dòng đầu tiên chứa 3 số nguyên m,n,Q(m,n,Q≤500).
//m dòng tiếp theo mỗi dòng chứa n số nguyên biểu diễn ma trận đã cho, các số liên tiếp trên một dòng cách nhau bởi một dấu cách.
//Q dòng tiếp theo, mỗi dòng là một câu hỏi chứa 2 số nguyên i,j cách nhau bởi một dấu cách.
//Đầu ra:
//In ra màn hình Q dòng, mỗi dòng tương ứng với câu trả lời của một câu hỏi.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <int> products(n);
    for(int i; i < n; ++i){
        cin >> products[i];
    }

    double average = (products.begin(), products.end(), 0.0);

    for(int product : products){
        if(product >= average)
        cout << product << " ";
    }
    return 0;
}