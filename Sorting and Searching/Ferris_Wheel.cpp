#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n,x; cin >> n >> x;
    vector <int> p(n);
    for(auto &x:p){cin >> x;}
    sort(p.begin(),p.end());
    int d = 0;
    for(int i=0,j=n-1; i<j; i++){
        while(j>i && p[i]+p[j]>x){j--;}
        if(j>i && p[i]+p[j]<=x){
            d++; j--;
        }
    }
    int ans = n-d;
    cout << ans << endl;
}