#include <bits/stdc++.h>
using namespace std;

#define int long long

int dp[19]; // dp[n] : n digit number starting with a fixed digit from [0,..,9]

void process_dp(){
    dp[1] = 1;
    for(int i=2; i<=18; i++){
        dp[i] = dp[i-1]*9;
    }
}

int ans(int n){
    if(n==-1){return 0;}
    if(n<=9){return (n+1);}
    string s = to_string(n);
    n = s.size();
    int c = 10;

    // numbers digit less than n counted
    for(int i=2; i<n; i++){
        c += (dp[i]*9); // number starting from [1,9]
    }

    // count all the numbers with size n  
    int p = 0; 
    for(int i=0; i<n; i++){
        int sz = n-i;
        int d = s[i]-'0';
        c += (d-(p<d))*dp[sz];
        if(d==p){return c;}
        p = d;
    }

    return c+1; // add the number n also because the last digit wasn't added
}

int32_t main(){
    int a,b; cin >> a >> b;
    process_dp();
    // for(int i=101; i<=200; i++){
    //     cout << i << ": " << ans(i) << endl;
    // }
    cout << ans(b)-ans(a-1) << endl;
}