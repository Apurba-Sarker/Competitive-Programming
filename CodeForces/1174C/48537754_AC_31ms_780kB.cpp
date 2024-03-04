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
   ll a[n+1];
   memset(a,0,sizeof(a));
   for(int i=2;i<=n;i+=2)
     a[i]=1;
     ll p=2;
   for(int i=3;i*i<=n;i++){
    if(a[i]==0){
        a[i]=p;
      for(int j=i*i;j<=n;j+=i){
          a[j]=p;
      }
      p++;
    }
   }
   for(int i=2;i<=n;i++){
     if(a[i]==0){
        a[i]=p;
        p++;
     }
   }
   for(int i=2;i<=n;i++)
    cout << a[i] << " ";
   cout << endl;
}
