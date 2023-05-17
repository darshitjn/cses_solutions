#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n,x; cin >> n >> x;
    vector <int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    if(n<4){
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    unordered_map <int,set<pair<int,int>>> mp;

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            mp[a[i]+a[j]].insert({i,j});

    for(int i=1; i<n; i++){
        for(int j=0; j<n; j++){
            mp[a[i]+a[j]].erase({j,i});
            mp[a[i]+a[j]].erase({i,j});
        }

        for(int j=0; j<i; j++){
            if(mp.find(x-a[i]-a[j]) != mp.end() && mp[x-a[i]-a[j]].size()){
                auto k = *(mp[x-a[i]-a[j]].begin());
                cout << (j+1) << " " << (i+1) << " " << (k.first+1) << " " << (k.second+1) << "\n";
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
}