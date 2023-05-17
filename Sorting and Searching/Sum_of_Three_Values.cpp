#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int32_t main(){
    int n,x; std::cin >> n >> x;
    std::vector <std::pair<int,int>> a(n);
    for(int i=0; i<n; i++){
        std::cin >> a[i].first;
        a[i].second = i+1;
    }
    
    if(n<3){std::cout << "IMPOSSIBLE\n"; return 0;}
    std::sort(a.begin(),a.end());

    for(int i=1; i<n-1; i++){
        int k = n-1;
        for(int j=0; j<i; j++){
            while(k>i && a[i].first+a[j].first+a[k].first>x){k--;}
            if(k>i && a[i].first+a[j].first+a[k].first==x){
                std::cout << a[i].second << " " << a[j].second << " " << a[k].second;
                return 0;
            }
        }
    }

    std::cout << "IMPOSSIBLE\n";
}