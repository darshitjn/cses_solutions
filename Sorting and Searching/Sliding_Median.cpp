#include <bits/stdc++.h>
using namespace std;

int m = -1;
multiset <int> up,down;

void adj(){
    while(up.size()>down.size()){
        down.insert(*up.begin());
        up.erase(up.find(*up.begin()));
    }
    while(down.size()>up.size()+1){
        up.insert(*down.rbegin());
        down.erase(down.find(*down.rbegin()));
    }
    m = *down.rbegin();
}

void add(int a){
    if(m==-1){
        down.insert(a);
        m = a; return;
    }

    if(a>m){up.insert(a);}
    else{down.insert(a);}
    adj();
}

void rem(int a){
    if(a>m){
        up.erase(up.find(a));
    }else{
        down.erase(down.find(a));
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
            cout << x << " ";
        return 0; 
    }

    for(int i=0; i<k-1; i++)
        add(a[i]);

    for(int i=k-1; i<n; i++){
        add(a[i]);
        cout << m << " ";
        rem(a[i-k+1]);
    }
}