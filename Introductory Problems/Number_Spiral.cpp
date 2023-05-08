#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t,r,c; cin >> t;
    while(t--){
        cin >> r >> c;
        
        if(r>c){
            if(r%2){cout << (r-1)*(r-1)+c << endl;}
            else{cout << r*r+1-c << endl;}
        }else{
            if(c%2){cout << c*c-r+1 << endl;}
            else{cout << (c-1)*(c-1)+r << endl;}
        }
    }
}