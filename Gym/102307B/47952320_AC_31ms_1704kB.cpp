#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    string t = s.substr(0, i), r = t, tp = t;
    reverse(r.begin(), r.end());
    t += s[i];
    t += r;
    tp += r;

    string u = t.substr(0, s.size());
    string up = tp.substr(0, s.size());
    if (up == s) {
      cout << tp << '\n';
      break;
    }
    if (u == s) {
      cout << t << '\n';
      break;
    }
  }
}