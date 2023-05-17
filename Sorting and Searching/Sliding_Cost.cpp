#include <bits/stdc++.h>
using namespace std;

#define int long long

int m = -1;
multiset <int> up,down;
int sup(0),sdn(0);

void adj(){
    while(up.size()>down.size()){
        down.insert(*up.begin());
        up.erase(up.find(*up.begin()));
        sdn += *down.rbegin();
        sup -= *down.rbegin();
    }
    while(down.size()>up.size()+1){
        up.insert(*down.rbegin());
        down.erase(down.find(*down.rbegin()));
        sdn -= *up.begin();
        sup += *up.begin();
    }
    m = *down.rbegin();
}

void add(int a){
    if(m==-1){
        down.insert(a);
        sdn += a;
        m = a; return;
    }

    if(a>m){
        up.insert(a); 
        sup += a;
    }else{
        down.insert(a); 
        sdn += a;
    }
    adj();
}

void rem(int a){
    if(a>m){
        up.erase(up.find(a)); 
        sup -= a;
    }else{
        down.erase(down.find(a));  
        sdn -= a;
    }
    adj();
}

int32_t main(){
    int n,k; cin >> n >> k;
    vector <int> a(n);
    for(auto &x:a)
        cin >> x;

    if(k==1){
        // both arrays will become zero when element is removed
        for(auto x:a)
            cout << 0 << " ";
        return 0; 
    }

    for(int i=0; i<k-1; i++)
        add(a[i]);

    for(int i=k-1; i<n; i++){
        add(a[i]);
        int sm = sup - up.size()*m + down.size()*m - sdn;
        cout << sm << " ";
        rem(a[i-k+1]);
    }
}