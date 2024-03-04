#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   /*ll T123;
   cin >> T123;
   while(T123--){

   }*/
   ll n,m,k; cin >> n >> m >> k;
   string s[n];
   for(int i=0;i<n;i++)
      cin >> s[i];
   ll a[n];
   for(int i=0;i<n;i++)
      cin >> a[i];
   map <string,ll> mx;
   for(int i=0;i<n;i++)
    mx[s[i]]=a[i];
   for(int j=0;j<m;j++){
      ll x;cin >> x;
      vector <ll> v;ll p=LONG_MAX;
      for(int i=0;i<x;i++){
        ll o; cin >> o;o--;v.push_back(o);
        p = min(p,a[o]);
      }
      for(int i=0;i<x;i++){
        mx[s[v[i]]]=p;
      }
   }
   string x[k];
   for(int i=0;i<k;i++)cin >> x[i];
   ll ans = 0;
   for(int i=0;i<k;i++)
    ans+=mx[x[i]];
   cout << ans << endl;
}
