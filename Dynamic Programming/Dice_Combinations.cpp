#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7; 

int32_t main(){
    int n; cin >> n;
    int dp[n+1] = {};
    dp[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=6; j++){
            if(i-j>=0){
                dp[i] += dp[i-j];
                dp[i] %= mod;
            }
        }
    }

    cout << dp[n] << endl;
}