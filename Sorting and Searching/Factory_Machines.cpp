#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n,t; cin >> n >> t;
    vector <int> tm(n);
    for(auto &x:tm){cin >> x;}

    function <bool(int)> ok = [&](int m){
        int p = 0;
        for(auto x:tm){
            p += (m/x);
            if(p>=t){return true;}
        }
        return false;
    };

    int l(0),r(1e18),m;

    while(l+1<r){
        m = l + (r-l)/2;
        if(ok(m)){r = m;}
        else{l = m;}
    }

    cout << r << endl;
}