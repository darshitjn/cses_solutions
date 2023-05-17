#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds;

template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;

int32_t main(){
    int n,k; cin >> n >> k;
    oset <int> s;
    for(int i=1; i<=n; i++){
        s.insert(i);
    }

    int curr = 0;
    while(!s.empty()){
        int sm = s.order_of_key(curr);
        int sz = s.size();
        // which element will get deleted?
        // k%sz
        int kd = k%sz;
        if(kd>=sz-sm){kd -= (sz-sm);}
        else{kd += sm;}
        curr = *s.find_by_order(kd);
        s.erase(curr);
        cout << curr << " ";
    }
}