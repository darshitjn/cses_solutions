#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n,m; cin >> n >> m;
    multiset <int> p;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        p.insert(a);
    }

    for(int i=0; i<m; i++){
        int a; cin >> a;
        auto it = p.upper_bound(a);
        if(it==p.begin()){cout << -1 << endl; continue;}
        it--;
        cout << *it << endl;
        p.erase(it);
    }
    
}