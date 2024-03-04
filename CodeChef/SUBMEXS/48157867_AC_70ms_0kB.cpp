#include <bits/stdc++.h>
using namespace std;

const int N = int(1e5) + 10;

vector<int> G[N];
bool vis[N];
int cnt[N];

int dfs(int u, int par) {
    cnt[u] = 1;
    for(auto v: G[u]) {
        if(!cnt[v] && v != par) {
            cnt[u] += dfs(v, u);
        }
    }
    return cnt[u];
}

long long dfs2(int u, int par) {
    vis[u] = true;
    long long mx = 0;
    for(auto v: G[u]) {
        if(!vis[v] && v != par) {
            mx = max(mx, dfs2(v, u));
        }
    }
    return (long long) cnt[u] + mx;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 2; i <= n; i++) {
            int p; cin >> p;
            G[i].push_back(p);
            G[p].push_back(i);
        }
        dfs(1, 1);
        cout << dfs2(1, 1) << '\n';
        for(int i = 0; i <= n; i++) {
            G[i].clear();
            vis[i] = false;
            cnt[i] = 0;
        }
    }
    
return 0;
}