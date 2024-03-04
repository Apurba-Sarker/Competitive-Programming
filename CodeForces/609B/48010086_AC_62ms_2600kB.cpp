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
   ll T123;
   //cin >> T123;
   /*while(T123--){

   }*/
   ll n,m;cin >> n >> m;
   map <ll,ll> v;
   ll a[n];
   for(int i=0;i<n;i++){cin >> a[i];v[a[i]]++;}
   ll ans = 0;
   vector <ll> b;
   sort(a,a+n);
   b.push_back(a[0]);
   for(int i=1;i<n;i++){
      if(a[i-1]!=a[i])
        b.push_back(a[i]);
   }
   ll o=n;
   for(int i=0;i<b.size();i++){
      ans+=(o-v[b[i]])*v[b[i]];
      o-=v[b[i]];
   }
   cout << ans << endl;
}
