 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;
//ll m = 998244353;
// A 65 Z 90 a 97 z 122


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   /*ll T123;
   cin >> T123;
   while(T123--){

   }*/
   ll n,p;
   cin >> n >> p;
   map <ll,ll> m;
   //memset(d,0,sizeof(d));
   while(p%2==0){
      m[2]++;p/=2;
   }
   for(ll i=3;i*i<=p;i+=2){
       while(p%i==0){
      m[i]++;p/=i;
   }
   }
   if(p)
    m[p]++;
   ll ans = 1;
   for(auto i:m){
        ll x = i.first;
        ll y = i.second;
    // cout << x << " " << y << endl;
      if(y>=n){
        ll l = y/n;
        while(l--){
            ans*=x;
        }
      }
   }
   cout << ans << endl;
}
