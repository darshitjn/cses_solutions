#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7; 

int32_t main(){
    int n,m; cin >> n >> m;
    int dp[m+1][n+1][(1<<n)] = {};
    dp[0][0][0] = 1;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            for(int p=0; p<(1<<n); p++){
                if(p&(1<<j)){
                    int q = p-(1<<j);
                    dp[i][j+1][q] += dp[i][j][p];
                    dp[i][j+1][q] %= mod;
                }else{
                    int q = p+(1<<j);
                    dp[i][j+1][q] += dp[i][j][p];
                    dp[i][j+1][q] %= mod;
                    if(j<n-1 && (p&(1<<(j+1)))==0){
                        q += (1<<(j+1));
                        q -= (1<<j);
                        dp[i][j+1][q] += dp[i][j][p];
                        dp[i][j+1][q] %= mod;
                    }
                }
            }
        }
        for(int p=0; p<(1<<n);p++){
            dp[i+1][0][p] = dp[i][n][p];
        }
    }

    cout << dp[m][0][0] << endl;
}

// easier implementation
// switch array after each move

int32_t main(){
    int n,m; cin >> n >> m;
    array <vector<int>,2> dp;
    dp.fill(vector<int>(1<<n,0));
    dp[0][0] = 1;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            for(int p=0; p<(1<<n); p++){
                dp[1][p^(1<<j)] += dp[0][p];
                dp[1][p^(1<<j)] %= mod;
                if(j<n-1 && ((p&(1<<j))==0) && ((p&(1<<(j+1)))==0)){
                    dp[1][p^(1<<(j+1))] += dp[0][p]; 
                    dp[1][p^(1<<(j+1))] %= mod;
                }
            }
            dp[0] = dp[1];
            dp[1] = vector<int>(1<<n,0); 
        }
    }
    cout << dp[0][0] << endl;
}