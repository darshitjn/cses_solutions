#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin >> n;
    vector <int> a(n);
    for(auto &x:a){cin >> x;}

    multiset <int> s;

    for(auto x:a){
        auto it = s.upper_bound(x);
        if(it != s.end()){s.erase(it);}
        s.insert(x);
    }

    cout << s.size() << endl;
}