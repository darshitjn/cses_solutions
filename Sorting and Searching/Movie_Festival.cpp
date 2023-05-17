#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin >> n;
    vector <pair<int,int>> m;
    for(int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        m.push_back({a,b});
    }

    sort(m.begin(),m.end(),[](pair <int,int> &a,pair <int,int> &b){
        if(a.second==b.second){return (a.first<b.first);}
        return (a.second<b.second);
    });

    int last = -1;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(m[i].first>=last){
            cnt++; 
            last = m[i].second;
        }
    }

    cout << cnt << endl;
}