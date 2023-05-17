#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n,m,k; cin >> n >> m >> k;
    vector <int> s(n),a(m);
    for(auto &x:s){cin >> x;}
    for(auto &x:a){cin >> x;}

    sort(s.begin(),s.end());
    sort(a.begin(),a.end());

    int ans = 0;
    int j = 0;
    for(int i=0; i<m; i++){
        while(j<n && s[j]<a[i]-k){j++;}
        if(s[j]<=a[i]+k && s[j]>=a[i]-k){
            ans++;
            j++;
        }
    }
    cout << ans << endl;
}