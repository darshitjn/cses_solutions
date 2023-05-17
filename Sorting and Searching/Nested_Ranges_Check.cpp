#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds;

template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;

int32_t main(){
    int n; cin >> n;
    vector <pair<pair<int,int>,int>> v;
    for(int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        v.push_back({{a,b},i});
    }

    sort(v.begin(),v.end(),[](pair<pair<int,int>,int> &a, pair<pair<int,int>,int> &b){
        if(a.first.second==b.first.second){
            return (a.first.first>b.first.first);
        }
        return (a.first.second<b.first.second);
    });

    array <int,2> ans[n];
    oset <pair<int,int>> s;

    for(auto x:v){
        ans[x.second][0] = s.size()-s.order_of_key({x.first.first,-1});
        s.insert({x.first.first,x.second});
    }

    sort(v.begin(),v.end(),[](pair<pair<int,int>,int> &a, pair<pair<int,int>,int> &b){
        if(a.first.second==b.first.second){
            return (a.first.first<b.first.first);
        }
        return (a.first.second>b.first.second);
    });

    s.clear();

    for(auto x:v){
        ans[x.second][1] = s.order_of_key({x.first.first+1,-1});
        s.insert({x.first.first,x.second});
    }

    for(int i=0; i<n; i++){
        cout << (ans[i][0]>0) << " ";
    }
    cout << endl;
        for(int i=0; i<n; i++){
        cout << (ans[i][1]>0) << " ";
    }
}