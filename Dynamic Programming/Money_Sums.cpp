#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin >> n;
    set <int> s;
    s.insert(0);

    for(int i=0; i<n; i++){
        int a; cin >> a;
        set <int> s2;
        for(auto x:s){
            s2.insert(x+a);
        }
        for(auto x:s2){
            s.insert(x);
        }
    }

    s.erase(0);
    cout << s.size() << endl;
    for(auto x:s){
        cout << x << " ";
    }
}