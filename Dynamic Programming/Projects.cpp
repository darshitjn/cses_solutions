#include <bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 1e9+7;



int32_t main(){
    int n; cin >> n;
    vector <vector<int>> v; 

    for(int i=0; i<n; i++){
        int a,b,c; cin >> a >> b >> c;
        v.push_back({b,a,c}); // first ending then starting then reward
    }

    sort(v.begin(),v.end());

    multiset<pair<int,int>> m;
    m.insert({0,0});  // dp initialization
    int ans = 0;

    for(int i=0; i<n; i++){
        auto it = m.upper_bound({v[i][1],-1});
        it--;
        ans = max(ans,it->second+v[i][2]);
        m.insert({v[i][0],ans});
    }

    cout << ans << endl;
}