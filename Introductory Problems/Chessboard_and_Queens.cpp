#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    vector <string> chess(8);
    for(auto &x:chess){cin >> x;}
    
    vector <int> p(8);
    int ans = 0;
    iota(p.begin(),p.end(),0);

    do{
        set <int> a,b;
        bool ok = true;
        for(int i=0; i<8; i++){
            if(chess[i][p[i]]=='*'){ok = false; continue;}
            a.insert(i+p[i]);
            b.insert(i-p[i]);
        }
        ok &= (a.size()==8 && b.size()==8);
        ans += ok;
    }while(next_permutation(p.begin(),p.end()));

    cout << ans << endl;
}