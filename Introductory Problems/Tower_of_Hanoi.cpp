#include <bits/stdc++.h>
using namespace std;

#define int long long

vector <vector<int>> toh(int a,int b,int c,int n){
    if(n==1){
        vector <vector<int>> ans(1,vector<int>(2));
        ans[0][0] = a;
        ans[0][1] = c;
        return ans;
    }
    vector <int> d;
    d.push_back(a);
    d.push_back(c);
    auto x = toh(a,c,b,n-1);
    x.push_back(d);
    auto y = toh(b,a,c,n-1);
    for(auto t:y){
        x.push_back(t);
    }
    return x;
}

int32_t main(){
    int n; cin >> n;
    auto v = toh(1,2,3,n);
    cout << v.size() << endl;
    for(auto x:v){
        cout << x[0] << " " << x[1] << endl;
    }
}