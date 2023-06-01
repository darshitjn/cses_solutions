#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7; 
const int N = 5e3+1;

int dp[N][N];

int32_t main(){
    string s,t; cin >> s >> t;
    int n = s.size();
    int m = t.size();
    for(int i=1; i<=n; i++){
        dp[i][0] = i;
    }
    for(int j=1; j<=m; j++){
        dp[0][j] = j;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            dp[i][j] = dp[i-1][j-1]+ (s[i-1]!=t[j-1]);
            dp[i][j] = min(dp[i][j],dp[i-1][j]+1);
            dp[i][j] = min(dp[i][j],dp[i][j-1]+1);
        }
    }

    cout << dp[n][m] << endl;
}