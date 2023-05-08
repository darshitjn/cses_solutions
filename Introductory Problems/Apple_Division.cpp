#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int w; cin >> w;
    vector <int> wt(w);
    int diff = 0;
    for(auto &x:wt){
        cin >> x;
        diff += x;
    }

    for(int i=0; i<(1<<w); i++){
        int cnt[2] = {};
        for(int j=0; j<w; j++){
            if((1<<j)&i){
               cnt[0] += wt[j]; 
            }else{
               cnt[1] += wt[j];
            }
        }
        diff = min(diff,abs(cnt[1]-cnt[0]));
    }
    cout << diff << endl;
}