#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin >> n;
    int m = 1e9+7;
    set <pair<int,int>> s;
    vector <int> a(n);
    for(auto &x:a)
       cin >> x;
    
    int ans[n] = {};
    
    for(int i=n-1; i>=0; i--){
        pair <int,int> p = {a[i],m};
        s.insert({a[i],i});
        while(*(s.rbegin()) > p){
            auto it = *(s.rbegin());
            ans[it.second] = i+1;
            s.erase(it);
        }
    }

    for(int i=0; i<n; i++)
        cout << ans[i] << " ";
}