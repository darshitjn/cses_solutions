#include <bits/stdc++.h>
using namespace std;

#define int long long

vector <string> v(int a){
    vector <string> ans;
    if(a==1){
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }
    auto k = v(a-1);
    for(auto x:k){
        string s = '0'+x;
        ans.push_back(s);
    }
    reverse(k.begin(),k.end());
    for(auto x:k){
        string s = '1'+x;
        ans.push_back(s);
    }
    return ans;
}

int32_t main(){
    int n; cin >> n;
    auto ans = v(n);
    for(auto x:ans){
        cout << x << endl;
    }
}