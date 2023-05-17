#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n,x; cin >> n >> x;
    vector <pair <int,int> > a;

    for(int i=0; i<n; i++){
        int y; cin >> y;
        a.push_back({y,i});
    }
    sort(a.begin(),a.end());

    for(int i=0,j=n-1; i<j; i++){\
       while(j>i && a[i].first +a[j].first >x){j--;}
       if(j>i && a[i].first+a[j].first==x){
        cout << (a[i].second+1) << " " << (a[j].second+1) << endl; return 0;
       }
    }
    cout << "IMPOSSIBLE\n";
}