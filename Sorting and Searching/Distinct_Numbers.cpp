#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin >> n;
    map <int,int> mp;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        mp[a]++;
    }
    cout << mp.size() << endl;
}