#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n; cin >> n;
    vector <pair<int,int>> v;
    for(int i=0; i<n; i++){
        int a,d; cin >> a >> d;
        v.push_back({a,d});
    }

    int t(0),ans(0);
    sort(v.begin(),v.end());

    for(int i=0; i<n; i++){
        t += v[i].first;
        ans += (v[i].second-t);
        //cout << t << " " << ans << endl;
    }
    cout << ans << endl;
}