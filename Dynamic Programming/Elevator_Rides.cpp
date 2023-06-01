#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7; 

int32_t main(){
    int n,x; cin >> n >> x;
    vector <int> v(n);

    for(auto &t:v)
        cin >> t;

    vector <int> dp(1<<n,21);
    vector <int> last(1<<n,0);
    dp[0] = 0;
    last[0] = 0;

    for(int i=1; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if((1<<j)&i){
                if(dp[i]>dp[i^(1<<j)]+(last[i^(1<<j)]<v[j])){
                    dp[i]=dp[i^(1<<j)]+(last[i^(1<<j)]<v[j]);
                    if(last[i^(1<<j)]<v[j]){
                        last[i] = x-v[j];
                    }else{
                        last[i] = last[i^(1<<j)]-v[j];
                    }
                }else if(dp[i]==dp[i^(1<<j)]+(last[i^(1<<j)]<v[j])){
                    if(last[i^(1<<j)]<v[j]){
                        last[i] = max(last[i],x-v[j]);
                    }else{
                        last[i] = max(last[i],last[i^(1<<j)]-v[j]);
                    }
                }
            }
        }
    }

    cout << dp[(1<<n)-1] << endl;
}