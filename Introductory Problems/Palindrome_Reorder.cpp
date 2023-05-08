#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    string s; cin >> s;
    int a[26] = {};
    int cnt = 0;
    for(auto x:s){
        a[x-'A']++;
    }
    for(int i=0; i<26; i++){
        cnt += (a[i]%2);
    }

    if(cnt>1){cout << "NO SOLUTION\n";}
    else{
        string ans;
        for(int i=0; i<26; i++){
            if(a[i]%2==0 && a[i]){
                for(int j=0; j<a[i]/2; j++){ans += (i+'A');}
            }
        }
        for(int i=0; i<26; i++){
            if(a[i]%2==1){
                for(int j=0; j<a[i]; j++){ans += (i+'A');}
            }
        }
        for(int i=25; i>=0; i--){
            if(a[i]%2==0){
                for(int j=0; j<a[i]/2; j++){ans += (i+'A');}
            }
        }

        cout << ans << endl;
    }
}