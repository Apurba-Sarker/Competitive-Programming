#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;

ll power(ll n){
   ll z=1;
   while(n--)
    z*=2;
   return z;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   /*ll T123;
   cin >> T123;
   while(T123--){

   }*/
   ll m;cin >> m;
   //ll m = n;
   ll t=floor(log2(m))+1;
   ll ans = LLONG_MAX ;
   for(ll i=0;i<=60;i++){
      ll a = m/power(i);
      ll c1 = m-a*power(i);
      if((a*power(i)+c1)==m)
      {
          //cout << a*power(i)  + c1 << endl;
          ans = min(ans,a+c1+i);
      }
   }
   cout << ans << endl;
}
