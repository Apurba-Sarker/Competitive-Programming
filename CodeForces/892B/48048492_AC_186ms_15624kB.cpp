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
       for(int i=0;i<n;i++){
           cin >> a[i];
       }
       ll b[n+1];memset(b,0,sizeof(b));
       for(int i=0;i<n;i++){
          b[i+1]++;
          b[max((ll)0,i+1-a[i])]--;
       }
       for(int i=1;i<=n;i++){
        b[i]+=b[i-1];
       }
       ll ans = 0;
       for(int i=1;i<=n;i++){
         if(b[i]==0)ans++;
       }
       cout << ans << endl;
}
