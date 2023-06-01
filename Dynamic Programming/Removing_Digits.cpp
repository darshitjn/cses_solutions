#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7; 

int32_t main(){
    int n; cin >> n;
    
    vector <int> dp(n+1,mod);
    dp[0] = 0;

    for(int i=1; i<=n; i++){
        int k = i;
        while(k){
            dp[i] = min(dp[i],dp[i-k%10]+1);
            k /= 10;
        }
    }

    cout << (dp[n]) << endl;
}