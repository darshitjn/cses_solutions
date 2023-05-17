#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin >> n;
    map <int,int> mp;
    vector <int> a(n);

    int y = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int ans = 1;

    for(int i=0; i<n; i++){
        mp[a[i]]++;
        while(mp[a[i]]>1){
            mp[a[y++]]--;
        }
        ans = max(ans,i-y+1);
    }

    cout << ans << endl;
} 
