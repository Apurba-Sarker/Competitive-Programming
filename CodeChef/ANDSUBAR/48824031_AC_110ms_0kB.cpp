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
   cin >> T123;
   while(T123--){
      ll n;
      cin >> n;
      ll ans = 1;
      ll p=1;
      ll c=1;
      while(c*2<=n){
        c*=2;
        ans = max(ans,c-p);
       // cout << c << " " << p << endl;
        p=c;
      }
      if(c>n)c/=2;
      ans = max(ans,n-c+1);
      cout << ans << endl;
   }
}
