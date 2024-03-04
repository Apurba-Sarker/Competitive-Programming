#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int cnt[2]={};
int n;
vector<int> adj[100001];
int st[100001];
void dfs(int x, int c) {
	st[x]=1;
	cnt[c]++;
	for(auto i:adj[x]) {
		if(!st[i]) {
			dfs(i,1-c);
		}
	}
}

int main() {
	cin>>n;
	for(int i=1;i<n;++i) {
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	dfs(1,0);
	ll res=cnt[0]*ll(cnt[1])-(n-1);
	cout<<res<<"\n";
}
