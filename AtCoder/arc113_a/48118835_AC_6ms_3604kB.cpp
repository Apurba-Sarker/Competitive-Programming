#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int k;
    cin >> k;
    int ans = 0;
    for(int a = 1; a <= k; a++) {
        for(int b = 1; b <= k / a; b++) {
            ans += (k / a) / b;
        }
    }
    cout << ans << '\n';
return 0;
}