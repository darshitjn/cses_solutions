#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin >> n;
    for(int i=1; i<=n; i++){
        int k = i*i; 
        // total ways of choosing two squares
        int t = k*(k-1)/2;
        // subtract ways to make four types of L
        //A horizontal and a vertical 
        // flipped and not flipped

        if(i>2)
            t -= 4*(i-1)*(i-2);
        cout << t << endl;
    }
}