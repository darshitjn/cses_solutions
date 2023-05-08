#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int t; cin >> t;
    int n;
    while(t--){
        cin >> n;
        if(n<=9){cout << n << endl; continue;}
        int p = 10;
        int d = 9;
        int c = 2;
        while(d+9*p*c<=n){
            d += 9*p*c;
            c++;
            p *= 10;
        }
        n -= d;
        int num = p+(n/c)-(n%c==0);
        n -= (n/c-(n%c==0))*c;
        c -= n;
        while(c--){
            num /= 10;
        }
        cout << (num%10) << endl;
    }
}