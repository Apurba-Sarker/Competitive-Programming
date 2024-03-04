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
      ll n,q;
      cin >> n >> q;
      ll a[n];
      for(int i=0;i<n;i++)
        cin >> a[i];
      ll ans=1;
      for(int i=1;i<n;i++)
        if(a[i-1]!=a[i])
          ans++;
      for(int i=0;i<q;i++){
        ll x,y;cin >> x >> y;
        x--;
        if(a[x]==y||n==1){
            cout << ans << endl;
        }
        else{
        if(x<n-1&&n>1){
            //a[x]=y;
            if(a[x+1]==y&&a[x+1]!=a[x])
                ans--;
            else if(a[x+1]!=y&&a[x+1]==a[x])
                ans++;
           // a[x]=y;
               // cout << ans << endl;
        }
        if(x>0&&n>1){
            if(a[x-1]==y&&a[x-1]!=a[x])
                ans--;
            else if(a[x-1]!=y&&a[x-1]==a[x])
                ans++;
           // a[x]=y;
              // cout << ans << endl;
        }
        a[x]=y;
            cout << ans << endl;
        }
      }
   }
}
