#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n; cin >> n;
    int g(1),s(0);
    for(int i=0; i<n; i++){
        int a; cin >> a;
        s += a;
        g = max(g,a);
    }
    s = max(s,2*g);
    cout << s << endl;
}