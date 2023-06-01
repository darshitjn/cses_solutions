#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7; 

int32_t main(){
    int n,s; cin >> n >> s;
    vector <int> coins(n);

    for(auto &x:coins)
        cin >> x;
    
    vector <int> dp(s+1,0);
    dp[0] = 1;

    for(int i=1; i<=s; i++){
        for(auto x:coins){
            if(i-x>=0){
                dp[i] += dp[i-x];
                dp[i] %= mod;
            }
        }
    }

    cout << (dp[s]>=mod?-1:dp[s]) << endl;
}