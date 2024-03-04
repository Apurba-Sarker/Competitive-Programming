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
   ll n,x;
   cin >> n >> x;
   ll a[n];ll ans = 0;
   for(int i=0;i<n;i++)cin >> a[i];
   for(int i=1;i<n;i++){
      if(a[i-1]+a[i]>x){
        ll p = a[i-1]+a[i]-x;
        ans+=p; a[i]-=p;
      }
   }
   if(a[n-1]>x)
      ans+=a[n-1]-x;
   cout << ans << endl;
}
