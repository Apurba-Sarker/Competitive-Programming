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
   ll p;
   for(int i=0;i<n;i++)if(a[i]==0){p=i;break;}
   ll ans1[n];memset(ans1,0,sizeof(ans1));
   ll ans[n];memset(ans,0,sizeof(ans));
   for(int i=0;i<n;i++){
    if(a[i]==0)p=i;
    ans1[i]=abs(p-i);
   }
   for(int i=n-1;i>=0;i--)if(a[i]==0){p=i;break;}
   for(int i=n-1;i>=0;i--){
    if(a[i]==0)p=i;
    ans[i]=abs(p-i);
   }
   for(int i=0;i<n;i++)
    ans[i] = min(ans[i],ans1[i]);
   for(int i=0;i<n;i++)
    cout << ans[i] << " ";
   cout << endl;
}
