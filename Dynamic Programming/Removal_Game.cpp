#include <bits/stdc++.h>
using namespace std;

#define int long long

const int neg = -1e15;

int32_t main(){
    int n; cin >> n;
    vector <int> v(n);

    for(auto &x:v)
        cin >> x;

    int pref[n+1] = {};

    for(int i=1; i<=n; i++)
        pref[i] = pref[i-1]+v[i-1];

    int dp[n][n] = {};

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            dp[i][j] = neg;
        }
    }

    for(int j=0; j<n; j++){
        for(int i=j; i>=0; i--){
            if(i<n-1){
                dp[i][j] = max(dp[i][j],pref[j+1]-pref[i+1]-dp[i+1][j]+v[i]);
            }
            if(j>0){
                dp[i][j] = max(dp[i][j],pref[j]-pref[i]-dp[i][j-1]+v[j]);
            }
        }
    }

    cout << dp[0][n-1] << endl;
}