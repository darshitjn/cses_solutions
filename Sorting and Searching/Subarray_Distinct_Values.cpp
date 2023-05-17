#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n,k; cin >> n >> k;
    vector <int> a(n);
    for(auto &x:a)
        cin >> x;

    map <int,int> mp;
    int d = 0;
    int ans = 0;
    for(int i=0,j=0; i<n; i++){
        mp[a[i]]++;
        d += (mp[a[i]]==1);
        while(d>k){
            mp[a[j]]--;
            d -= (mp[a[j++]]==0);
        }
        ans += (i-j+1);
    }
    cout << ans << endl;
}