#include <iostream>
#include <set>

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int x,n; std::cin >> x >> n;
    std::set <int> s;
    s.insert(0);
    s.insert(x);
    std::multiset <int> m;
    m.insert(x);

    for(int i=0; i<n; i++){
        int a; std::cin >> a;
        auto it = s.upper_bound(a);
        auto it2 = it;
        it2--;
        int val = *it - *it2;
        auto f = m.find(val);
        m.erase(f);
        m.insert(*it-a);
        m.insert(a-*it2);
        s.insert(a);
        std::cout << *(m.rbegin()) << " ";
    }
}