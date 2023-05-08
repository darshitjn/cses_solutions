#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int t; cin >> t;
    int a,b;
    while(t--){
        cin >> a >> b;
        int c = 2*a-b;
        int d = 2*b-a;
        if(c>=0 && d>=0 && c%3==0 && d%3==0){cout << "YES\n";}
        else{cout << "NO\n";}
    }
}