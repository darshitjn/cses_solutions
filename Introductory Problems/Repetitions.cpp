#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    string s; cin >> s;
    int ans = 1,curr = 1;

    for(int i=1; i<s.size(); i++){
        curr *= (s[i]==s[i-1]);
        curr++;
        ans = max(ans,curr);
    }

    cout << ans << endl;
}