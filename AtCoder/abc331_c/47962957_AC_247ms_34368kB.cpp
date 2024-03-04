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
      ll x;
      cin >> s
   }*/
   ll n;
   cin >> n;
   ll a[n];
   for(int i=0;i<n;i++) cin >> a[i];
   ll b[n];
   for(int i=0;i<n;i++)b[i]=a[i];sort(b,b+n);
   vector <pair<ll,ll>> v;
   v.push_back(make_pair(b[0],0));
   for(int i=1;i<n;i++){
    if(b[i-1]!=b[i]){
        v.push_back(make_pair(b[i],0));
    }
   }
   map <ll,ll> m;
   for(int i=0;i<n;i++)
    m[b[i]]++;
   for(int i=0;i<v.size();i++){
     v[i].second=m[v[i].first];
   }
   sort(v.begin(),v.end());
  // for(int i=0;i<v.size();i++)
    //cout << v[i].first << " " << v[i].second << endl;
   ll u = v.size(); //cout << u << endl;
  // ll p[u];
   map <ll,ll> ans;
   ans[v[u-1].first]=0;//v[u-1].first*v[u-1].second;
   for(int i=u-2;i>=0;i--){
      ans[v[i].first]=ans[v[i+1].first]+v[i+1].first*v[i+1].second;
   }
   for(int i=0;i<n;i++)
    cout << ans[a[i]] << " ";cout << endl;
}
