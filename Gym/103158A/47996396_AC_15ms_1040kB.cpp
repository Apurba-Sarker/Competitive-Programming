#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  freopen("alimagde.in", "r", stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int tc;
  cin >> tc;
  while (tc--) {
    ll n, sum = 0;
    cin >> n;
    ll ans = n;
    for (ll i = 1;; i++) {
      sum += i;
      if (sum > n) break;
      ans--;
    }
    cout << ans << '\n';
  }
}