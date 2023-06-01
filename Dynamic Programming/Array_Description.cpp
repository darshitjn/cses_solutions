#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7; 

int32_t main(){
    int n,m; cin >> n >> m;
    int t; cin >> t;
    vector<vector<int>> dp(2,vector<int>(m+2,0));
    if(t==0){
        dp[1] = vector<int>(m+2,1);
        dp[1][0] = 0; dp[1][m+1] = 0;
    }else{
        dp[1][t] = 1;
    }
    vector <int> a(n-1);

    for(auto &x:a)
        cin >> x;

    for(auto x:a){
        dp[0] = dp[1];
        dp[1][0] = 0;

        if(x==0){
            for(int i=1; i<=m; i++){
                dp[1][i] = (dp[0][i-1]+dp[0][i]+dp[0][i+1])%mod;
            }
        }else{
            dp[1] = vector<int>(m+2,0);
            dp[1][x] = (dp[0][x-1]+dp[0][x]+dp[0][x+1])%mod;
        }
    }

    int ans = 0;
    for(int i=1; i<=m; i++){
        ans += dp[1][i];
        ans %= mod;
    }

    cout << ans << endl;
}