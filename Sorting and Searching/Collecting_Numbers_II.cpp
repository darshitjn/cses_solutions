#include <bits/stdc++.h> 
using namespace std;

int32_t main(){
    int n,m; cin >> n >> m;
    vector <int> p(n+1);
    vector <int> v;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        v.push_back(a);
        p[a] = i;
    }

    int ans = 1;
    for(int i=2; i<=n; i++){
        ans += (p[i]<p[i-1]);
    }

    while(m--){
        int b,c; cin >> b >> c;
        // now check all the pairs which are affected by this swap
        // the pairs can be similiar as the pairs affected from swap
        // of element valued a will be (a-1,a) and (a,a+1)
        // so we can store it in set of pair of int

        if(b>c){swap(b,c);}

        set <pair<int,int>> s;
        int x = v[b-1];
        int y = v[c-1];
        map <int,int> fin;

        fin[x+1] = p[x+1];
        fin[y+1] = p[y+1];
        fin[x-1] = p[x-1];
        fin[y-1] = p[y-1];
        fin[x] = c-1;
        fin[y] = b-1;

        if(x<n){s.insert({x,x+1});}
        if(y<n){s.insert({y,y+1});}
        if(x>1){s.insert({x-1,x});}
        if(y>1){s.insert({y-1,y});}

        for(auto k:s){
            ans += (p[k.first]<p[k.second] && fin[k.first]>fin[k.second]);
            ans -= (p[k.first]>p[k.second] && fin[k.first]<fin[k.second]);
        }

        swap(v[b-1],v[c-1]);
        p[x] = c-1;
        p[y] = b-1;

        cout << ans << endl;
    }
}