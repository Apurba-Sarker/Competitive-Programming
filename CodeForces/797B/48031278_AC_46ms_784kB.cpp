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
   sort(a,a+n);
   ll x = LONG_MAX;
   ll x1 = LONG_MAX;
   ll ans = 0;
   for(int i=0;i<n;i++)
    if(a[i]>0)
    ans+=a[i];
   if(ans%2)
    cout << ans << endl;
   else{
     //ll x=0;
     for(int i=0;i<n;i++){
        if(a[i]>0&&a[i]%2==1)
            x = min(a[i],x);
     }
     for(int i=0;i<n;i++){
         if(a[i]<0&&abs(a[i])%2==1)
            x1 = min(abs(a[i]),x1);
     }
     cout << ans - min(x,x1) << endl;
   }
}
