#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7; 
const int N = 1e6;

int dp[N+1][2];

int32_t main(){
    dp[1][0] = 1;
    dp[1][1] = 1;
    for(int i=2; i<=N; i++){
        dp[i][1] = (4*dp[i-1][1]+dp[i-1][0])%mod;
        dp[i][0] = (dp[i-1][1]+2*dp[i-1][0])%mod;
    }
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << (dp[n][0]+dp[n][1])%mod << endl;
    }
}