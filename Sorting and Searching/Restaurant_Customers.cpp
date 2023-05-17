#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin >> n;
    set <pair<int,int>> s;

    for(int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        s.insert({a,0});
        s.insert({b,1});
    }
    int ans = 1;
    int curr = 0;
    for(auto x:s){
        if(x.second==0){curr++;}
        else{curr--;}
        ans = max(ans,curr);
    }
    cout << ans << endl;
}