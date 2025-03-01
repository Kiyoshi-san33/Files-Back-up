#include <bits/stdc++.h>
#define ll long
using namespace std;

const int maxN = 1e6 + 10;
ll a[maxN], sum = 0;
int n;

ll maxSubarray(int k){
    ll res = sum;
    int l = 1, r = k;
    while (r <= k)
    {
        r++;
        sum = sum + a[r] - a[l];
        l++;
        res = max(res,sum);
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(i <= k) sum = sum += a[i];
    }
    cout << maxSubarray(k);
    return 0;
}