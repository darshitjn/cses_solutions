#include <bits/stdc++.h>
using namespace std;

#define int long long

int a[26];

vector <string> genString(){
    vector <string> ans;
    string sam;
    for(int i=0; i<26; i++){
        char ch = i+'a';
        if(a[i]>0){
            a[i]--;
            auto x = genString();
            if(x.empty()){x.push_back(sam);}
            for(auto y:x){
                string s;
                s += ch;
                s += y;
                ans.push_back(s);
            }
            a[i]++;
        }
    }
    return ans;
}

int32_t main(){
    string s; cin >> s;
    for(auto x:s){a[x-'a']++;}

    auto ans = genString();
    cout << ans.size() << endl;
    for(auto x:ans){
        cout << x << endl;
    }
}