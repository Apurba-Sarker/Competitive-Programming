#include <bits/stdc++.h>
using namespace std;

#define int long long

int spf[51];
void sieve(int n) {
    for(int i = 2; i <= n; i++) {
        if(spf[i] > 0) continue;
        for(int j = i; j <= n; j += i) {
            if(spf[j] == 0) {
                spf[j] = i;
            }
        }
    }
    spf[0] = -1;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    sieve(50);
    vector<int> primes;
    for(int i = 2; i < 50; i++) {
        if(spf[i] == i) {
            primes.push_back(i);
        }
    }
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v)
        cin >> x;
    set<int> st;
    for(int mask = 0; mask < (1LL << 15); mask++) {
        int ans = 1;
        for(int i = 0; i < 15; i++) {
            if(mask & (1LL << i)) {
                ans *= primes[i];
            }
        }
        bool ok = true;
        for(auto x: v) {
            if(__gcd(x, ans) == 1) {
                ok = false;
                break;
            }
        }
        if(ok) {
            st.insert(ans);
        }
    }
    cout << *st.begin() << '\n';

return 0;
}