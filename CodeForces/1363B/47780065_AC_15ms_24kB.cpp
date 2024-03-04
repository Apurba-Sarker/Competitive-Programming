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
      string s;
      cin >> s;
      ll n = s.size();
      ll ans = LONG_MAX;
      ll o[n+1],z[n+1];
      memset(o,0,sizeof(o));
      memset(z,0,sizeof(z));
      for(int i=0;i<n;i++){
        if(s[i]=='1'){
            z[i+1]=z[i];
            o[i+1]=o[i]+1;
        }
        else{
            z[i+1]=z[i]+1;
            o[i+1]=o[i];
        }
      }
      for(int i=1;i<=n;i++){
        ll z1 = o[i-1]+z[n]-z[i-1];
        ll z2 = z[i-1]+o[n]-o[i-1];
        z1 = min(z1,z2);
        ans=min(ans,z1);
      }
      cout << ans << endl;
   }
}
