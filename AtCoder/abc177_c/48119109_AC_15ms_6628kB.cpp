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
   ll n; cin >> n;
   ll a[n+1],b[n+1];
   memset(a,0,sizeof(a));
   memset(b,0,sizeof(b));
   for(int i=1;i<=n;i++)
    {cin >> a[i];b[i]=a[i];}
   for(int i=1;i<=n;i++)
    a[i]=(a[i]%MOD+a[i-1]%MOD)%MOD;
   ll ans = 0;
   for(int i=1;i<=n;i++){
     ll x = (a[n]-a[i]);
     if(x<0)
        x+=MOD;
    ans=(ans%MOD+((b[i]%MOD)*(x%MOD))%MOD)%MOD;
   }
    cout << ans << endl;
}
