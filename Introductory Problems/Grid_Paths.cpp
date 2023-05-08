#include <bits/stdc++.h>
using namespace std;

string s;
int ans;
bool vis[7][7];

bool ok(int r,int c){
    return (r>=0 && r<7 && c>=0 && c<7 && !vis[r][c]);
}

void dfs(int r,int c, int steps){
    if(steps<48 && r==6 && c==0){return;}
    if(steps==48){
        ans += (r==6 && c==0);
        return;
    }
    vis[r][c] = 1;

    if(s[steps]=='L' || s[steps]=='?'){
        if(ok(r,c-1)){
            if(!(!ok(r,c-2) && ok(r+1,c-1) && ok(r-1,c-1)))
                dfs(r,c-1,steps+1);
        }
    }
    if(s[steps]=='R' || s[steps]=='?'){
        if(ok(r,c+1)){
            if(!(!ok(r,c+2) && ok(r+1,c+1) && ok(r-1,c+1)))
                dfs(r,c+1,steps+1);
        }
    }
    if(s[steps]=='U' || s[steps]=='?'){
        if(ok(r-1,c)){
            if(!(!ok(r-2,c) && ok(r-1,c-1) && ok(r-1,c+1)))
                dfs(r-1,c,steps+1);
        }
    }
    if(s[steps]=='D' || s[steps]=='?'){
        if(ok(r+1,c)){
            if(!(!ok(r+2,c) && ok(r+1,c-1) && ok(r+1,c+1)))
                dfs(r+1,c,steps+1);
        }
    }
    vis[r][c] = 0;
}

int32_t main(){
    cin >> s;
    dfs(0,0,0);
    cout << ans << endl;
}