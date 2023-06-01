#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7; 

int32_t main(){
    int n; cin >> n;
    vector <string> g(n);

    for(int i=0; i<n; i++)
        cin >> g[i];

    vector <vector<int>> dp(n,vector<int>(n,0));
    dp[0][0] = (g[0][0]=='.');

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(g[i][j]=='.'){
                if(i>0){dp[i][j] += dp[i-1][j];}
                if(j>0){dp[i][j] += dp[i][j-1];}
                dp[i][j] %= mod;
            }
        }
    }

    cout << dp[n-1][n-1] << endl;
}