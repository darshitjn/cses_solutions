#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7; 

int32_t main(){
    int n,x; cin >> n >> x;
    vector <int> pages(n),price(n);

    for(auto &t:price)
        cin >> t;

    for(auto &t:pages)
        cin >> t;

    int dp[x+1] = {};

    for(int i=0; i<n; i++){
        for(int j=x; j>=1; j--){
            if(j-price[i]>=0){
                dp[j] = max(dp[j],dp[j-price[i]]+pages[i]);
            }
        }
    }

    int ans = 0;
    for(int i=0; i<=x; i++){
        ans = max(ans,dp[i]);
    }

    cout << ans << endl;
}