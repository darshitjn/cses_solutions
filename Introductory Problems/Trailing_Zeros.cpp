#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n; cin >> n;
    int ans = 0;
    int k = 5;
    while(n>=k){
        ans += (n/k);
        k *= 5;
    }
    cout << ans << endl;
}