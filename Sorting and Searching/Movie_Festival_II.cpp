#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n,k; cin >> n >> k;
    multiset <int> m;
    for(int i=0; i<k; i++)
        m.insert(0);

    vector <pair<int,int>> v;
    for(int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        v.push_back({a,b});
    }

    sort(v.begin(),v.end(),[&](pair <int,int> a, pair <int,int> b){
        if(a.second==b.second){return (a.first<b.first);}
        return (a.second<b.second);
    });

    int ans = 0;

    for(int i=0; i<n; i++){
        auto it = m.upper_bound(v[i].first);
        if(it==m.begin()){continue;}
        it--;
        m.erase(it);
        m.insert(v[i].second);
        ans++;
    }

    cout << ans << endl;
}