#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin >> n;
    vector <int> a,b;
    if(n==1 || n==2){cout << "NO\n"; return 0;}
    if(n==3){cout << "YES\n2\n1 2\n1\n3\n"; return 0;}
    for(int i=n; i-4>=0; i-=4){
        a.push_back(i);
        a.push_back(i-3);
        b.push_back(i-1);
        b.push_back(i-2);
        if(i==7){
            a.push_back(1);
            a.push_back(2);
            b.push_back(3);
        }
        if(i==6 || i==5){cout << "NO\n"; return 0;}
    }
    cout << "YES\n";
    cout << a.size() << endl;
    for(auto x:a){cout << x << " ";}
    cout << endl;
    cout << b.size() << endl;
    for(auto x:b){cout << x << " ";}
    cout << endl;
}