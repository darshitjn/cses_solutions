#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,curr,t; cin >> n >> curr;
    ll ans = 0;
    for(int i=1; i<n; i++){
        cin >> t; 
        curr = max(t,curr);
        ans += (curr-t);
    }

    cout << ans << endl;

}