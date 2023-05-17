#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n,x; cin >> n >> x;
    map <int,int> mp;
    mp[0]++;

    int sum = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        int b; cin >> b;
        sum += b;
        if(mp.find(sum-x) != mp.end()){
            ans += mp[sum-x];
        }
        mp[sum]++;
    }
    cout << ans << endl;
}