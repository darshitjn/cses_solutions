#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7; 

int32_t main(){
    int n,s; cin >> n >> s;
    vector <int> coins(n);

    for(auto &x:coins)
        cin >> x;
    
    vector <int> dp(s+1,mod);
    dp[0] = 0;

    for(int i=1; i<=s; i++){
        for(auto x:coins){
            if(i-x>=0){
                dp[i] = min(dp[i],dp[i-x]+1);
            }
        }
    }

    cout << (dp[s]>=mod?-1:dp[s]) << endl;
}