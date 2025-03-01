#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    vector <int> a(n);
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    
    sort(a.begin() , a.end());
    
    double m;
    if(n % 2 == 1){
        m = a[n / 2];
    } else {
        m = (a[n / 2 - 1] + a[n / 2]) / 2.0;
    }
    cout << fixed << setprecision(1) << m << endl;
    return 0;
}
