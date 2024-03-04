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
   ll n;cin >> n;
   ll a[n];
   for(int i=0;i<n;i++)cin >> a[i];
   ll b[32];
   for(ll i=0;i<=31;i++){
      b[i] = pow(2,i);
   }
   map <ll,ll> m;
   for(int i=0;i<n;i++)
    m[a[i]]++;
   ll ans = 0;
   for(int i=0;i<n;i++){
     for(int j=0;j<=31;j++){
         if(m[b[j]-a[i]]&&!(a[i]==(b[j]-a[i])&&m[b[j]-a[i]]==1)){
            if(a[i]==(b[j]-a[i]))
            ans+=m[b[j]-a[i]]-1;
          else
            ans+=m[b[j]-a[i]];
            //cout << a[i] << " "<< b[j]-a[i] << endl;
         }
     }
   }
   cout << ans/2 << endl;
}
