#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin >> n;
    vector <int> a(n);
    for(auto &x:a){cin >> x;}
    int l(0),r(1e9+7),m;

    function <int(int)> cost = [&](int c){
        int ans = 0;
        for(auto x:a){ans += abs(x-c);}
        return ans;
    };

    while(l+1<r){
        m = (l+r)>>1;
        if(cost(m-1)>cost(m)){l = m;}
        else{r = m;}
    }

    cout << cost(l) << endl;
}