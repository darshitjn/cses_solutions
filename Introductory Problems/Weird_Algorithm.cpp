#include <bits/stdc++.h>
using namespace std;
#define int long long

// See collatz conjecture
// for t = 1e8 the max. steps is 949 only

int32_t main(){
    int t; cin >> t;
    while(t>1){
        cout << t << " ";
        if(t%2)
            t = 3*t+1;
        else
            t = t/2;
    }
    cout << 1 << endl;
}