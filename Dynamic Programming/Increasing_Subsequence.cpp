#include <bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 1e9+7;



int32_t main(){
    int n,a; cin >> n;
    multiset <int> s;

    for(int i=0; i<n; i++){
        cin >> a;
        auto it = s.lower_bound(a);
        if(it != s.end()){s.erase(it);}
        s.insert(a);
    }

    cout << s.size() << endl;
}