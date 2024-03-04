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
   ll n,k;
   cin >> n >> k;
   ll a[n];
   for(int i=0;i<n;i++)cin >> a[i];
   sort(a,a+n);
   ll ans = 0;
   ll p=a[0];
   for(int i=1;i<n;i++){
     if(a[i]-p>=k){
        ans++;p=a[i];
     }
   }
   if(ans)ans++;
   cout << ans << endl;
}
