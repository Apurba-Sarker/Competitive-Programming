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
   //ll T123;
   //cin >> T123;
   //while(T123--){}
      ll n;
      cin >> n;
      ll a[n];
      for(int i=0;i<n;i++)cin >> a[i];
      ll ans = 0;ll f=1,z=0;
      for(int i=0;i<n;i++){
         if(a[i]>0)
            ans+=a[i]-1;
         else if(a[i]<0){
            ans+=abs(a[i])-1;f*=-1;
         }
         else
            z++;
      }
      if(f==-1&&z){
        ans+=z;
      }
      else if(f==-1&&z==0){
        ans+=2;
      }
      else
        ans+=z;
      cout << ans << endl;
}
