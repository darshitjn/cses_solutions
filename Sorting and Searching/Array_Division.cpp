#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n,k; cin >> n >> k;
    vector <int> a(n);

    for(auto &x:a)
        cin >> x;

    
    int l(0),r(2e14+7),m;

    function <bool(int)> ok = [&](int m){
        int sub = 1;
        int curr = 0;
        for(int i=0; i<n; i++){
            curr += a[i];
            if(a[i]>m){return false;}
            if(curr>m){
                curr = a[i];
                sub++;
            }
        }
        return (sub<=k);
    };

    while(l+1<r){
        m = (l+r)>>1;
        if(ok(m)){r = m;}
        else{l = m;}
    }

    cout << r << endl;
}