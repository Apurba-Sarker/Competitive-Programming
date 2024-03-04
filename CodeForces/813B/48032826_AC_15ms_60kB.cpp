#include <bits/stdc++.h>
using namespace std;

#define int long long
const int inf = 1e18;

int x, y;
bool __overflowed__;

int power(int a, int b) {
    __int128 ans = 1;
    for(int i = 0; i < b; i++) {
        ans *= a;
        if(ans > inf) {
            __overflowed__ = true;
            return -1;
        }
    }
    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int l, r;
    cin >> x >> y >> l >> r;
    vector<int> years;
    for(int a = 0; a <= 60; a++) {
        for(int b = 0; b <= 60; b++) {
            __overflowed__ = false;
            int p1 = power(x, a), p2 = power(y, b);
            if(__int128(p1) + __int128(p2) > inf) __overflowed__ = true;
            if(!__overflowed__ && (p1 + p2) >= l && (p1 + p2) <= r) {
                years.push_back(p1 + p2);
            }
        }
    }
    years.push_back(l - 1);
    years.push_back(r + 1);
    sort(years.begin(), years.end());
    int gold = 0;
    for(int i = 1; i < (int) years.size(); i++) {
        gold = max(gold, years[i] - years[i - 1] - 1);
    }
    cout << gold << '\n';
    
return 0;
}