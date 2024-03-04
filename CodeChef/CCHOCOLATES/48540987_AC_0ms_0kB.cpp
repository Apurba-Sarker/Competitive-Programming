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
      ll x,y,z; cin >> x >> y >> z;
      ll ans = 0;
      ans+=x*5+y*10;
      cout << ans/z << endl;
   }
}
