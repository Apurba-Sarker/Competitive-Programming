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
   ll a,b,c,k;cin >> a >> b >> c >> k;
   ll ans=0;
   ans+=min(k,a);
   k-=min(k,a);
    //ans+=min(k,a);
   k-=min(k,b);
    ans-=min(k,c);
   k-=min(k,a);
   cout << ans << endl;
}
