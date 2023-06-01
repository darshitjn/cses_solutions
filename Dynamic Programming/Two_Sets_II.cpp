#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 250*501+1;
const int mod = 1e9+7;



int32_t main(){
    int n; cin >> n;
    int s = (n*(n+1))/2;

    if(s%2){
        cout << 0 << endl; return 0; 
    }

    s /= 2;
    vector <int> dp(N,0);
    dp[0] = 1;

    for(int i=1; i<=n; i++){
        for(int j=(i*(i+1))/2; j>=i; j--){
            dp[j] += dp[j-i];
            dp[j] %= mod;
        }
    }
    int inv = (mod+1)/2;
    int ans = (inv*dp[s])%mod;

    cout << ans << endl;
}