#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin >> n;
    vector <int> a(n);
    for(auto &x:a){cin >> x;}

    sort(a.begin(),a.end());

    int r(0);
    for(int i=0; i<n; i++){
        if(a[i]>r+1){cout << (r+1) << endl; return 0;}
        r = a[i]+r;
    }

    cout << (r+1) << endl;
}