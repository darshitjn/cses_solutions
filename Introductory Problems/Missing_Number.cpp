#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin >> n;
    int sum = (n*(n+1))/2;

    for(int i=0,t; i<n-1; i++){
        cin >> t; sum -= t;
    }
    
    cout << sum << endl;
}