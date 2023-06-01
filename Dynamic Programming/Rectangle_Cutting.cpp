#include <bits/stdc++.h>
using namespace std;

const int N = 501;
const int mod = 1e9;
int dp[N][N];

int32_t main(){
    int a,b; cin >> a >> b;

    for(int i=0; i<=a; i++){
        for(int j=0; j<=b; j++){
            dp[i][j] = mod;
            if(i==0 || j==0){continue;}
            if(i==j){dp[i][j]=0; continue;} 
            for(int k=1; k<=i-1; k++){
                dp[i][j] = min(dp[i][j],dp[i-k][j]+dp[k][j]+1);
            }
            for(int k=1; k<=j-1; k++){
                dp[i][j] = min(dp[i][j],dp[i][j-k]+dp[i][k]+1);
            }
        }
    }

    cout << dp[a][b] <<  endl;
}