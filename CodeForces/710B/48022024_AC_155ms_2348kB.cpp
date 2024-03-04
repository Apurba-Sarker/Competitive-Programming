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
   ll a[n];for(int i=0;i<n;i++)cin >> a[i];
   sort(a,a+n);
   ll ans=0,ans1=0;
   for(int i=0;i<n;i++){
     ans+=abs(a[i]-a[(n-1)/2]);
     ans1+=abs(a[i]-a[1+(n-1)/2]);
   }
   //cout << ans << " " << ans1 << endl;
   if(ans>ans1)
    cout << a[1+(n-1)/2] << endl;
   else
    cout << a[(n-1)/2] << endl;

}
