#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin >> n;
    int curr; cin >> curr;
    int sum = curr;
    for(int i=0; i<n-1; i++){
        int a; cin >> a;
        curr = max(curr,0ll);
        curr += a;
        sum = max(sum,curr);
    }
    cout << sum << endl;
}