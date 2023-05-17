#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n,a,b; cin >> n >> a >> b;
    vector <int> v(n);
    vector <int> pref(n+1,0);

    for(int i=0; i<n; i++){
        cin >> v[i];
        pref[i+1] = pref[i]+v[i];
    }

    int ans = -1e15;
    multiset <int> s;
    s.insert(0);

    for(int i=a-1; i<n; i++){
        if(i>=b){
            s.erase(s.find(pref[i-b]));
        }
        ans = max(ans,pref[i+1]-*s.begin());
        s.insert(pref[i-a+2]);
    }

    cout << ans << endl;
}