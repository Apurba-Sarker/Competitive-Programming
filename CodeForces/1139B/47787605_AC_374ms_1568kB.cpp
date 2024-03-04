#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;

int main()
{
   /*ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll T123;
   cin >> T123;
   while(T123--){

   }*/
   ll n;
   cin >> n;
   ll a[n];
   for(int i=0;i<n;i++)
     cin >> a[i];
   ll ans = 0;
   ans+=a[n-1];
   ll m = a[n-1];
   for(int i=n-2;i>=0;i--){
     if(m==0)
       continue;
    else
     ans+=min(m-1,a[i]);
     if(a[i]<m)
        m=a[i];
     else
        m=m-1;
     //ans+=m;
     //m = min(m-1,a[i]);
   }
   cout << ans << endl;
}
