#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7;

int pw(int a, int b){
    if(b==0){return 1;}
    int k = pw(a,b/2);
    k = (k*k)%mod;
    if(b%2){return (k*a)%mod;}
    return k;
}

int32_t main(){
    int n; cin >> n;
    cout << pw(2,n) << endl;
}