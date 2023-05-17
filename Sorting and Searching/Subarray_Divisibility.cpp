#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n; cin >> n;
    int mp[n] = {};
    mp[0]++;

    int sum = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        int b; cin >> b;
        if(b<0){
            int k = b/n;
            b += (-k+1)*n;
        }
        sum += (b%n);
        sum %= n;
        ans += mp[sum];
        mp[sum]++;
    }
    cout << ans << endl;
}