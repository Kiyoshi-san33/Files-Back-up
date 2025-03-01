//Cho 2 xâu kí tự s và t có cùng độ dài. Viết chương trình đếm số lượng vị trí i sao cho s[i]=t[i].
//Đầu vào:
//Dữ liệu vào từ bàn phím gồm 2 dòng.
//Dòng thứ nhất chứa xâu s.
//Dòng thứ hai chứa xâu t.
//Đầu ra:
//In ra màn hinh theo yêu cầu ở trên.

#include <bits/stdc++.h>

using namespace std;

int main () {

   string s, t;
   cin >> s >> t;
   
   int count = 0;
   
   for(size_t i = 0; i < s.length(); ++i){
       if(s[i] == t[i]){
           count++;
       }
   }
   cout << count << endl;
   
   return 0;
}