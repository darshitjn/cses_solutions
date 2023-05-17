#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin >> n;
    vector <pair<pair<int,int>,int>> v;

    for(int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        v.push_back({{a,b},i});
    }

    sort(v.begin(),v.end(),[&](pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
        if(a.first.second==b.first.second){return (a.first.first<b.first.first);}
        return (a.first.second<b.first.second);
    });

    // r is the number of rooms required;
    int r = 0;
    set <pair<int,int>> s;
    int rooms[n] = {};
    for(int i=0; i<n; i++){
        auto it = s.upper_bound({v[i].first.first,-1});
        if(s.begin() != it){it--;}
        else{
            s.insert({0,r++});
            it = s.begin();
        }
        int room = (*it).second;
        s.erase(it);
        s.insert({v[i].first.second,room});
        rooms[v[i].second] = room;
    }
    cout << r << "\n";
    for(int i=0; i<n; i++){
        cout << (rooms[i]+1) << " ";
    }
}