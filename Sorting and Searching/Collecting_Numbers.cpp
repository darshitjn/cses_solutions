#include <bits/stdc++.h> 
using namespace std;

int32_t main(){
    int n; cin >> n;
    vector <int> p(n+1);
    for(int i=0; i<n; i++){
        int a; cin >> a;
        p[a] = i;
    }
    int ans = 1;
    for(int i=2; i<=n; i++){
        ans += (p[i]<p[i-1]);
    }

    cout << ans << endl;
}