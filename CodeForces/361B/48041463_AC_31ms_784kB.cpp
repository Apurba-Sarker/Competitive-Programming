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
   ll n,k; cin >> n >> k;
   ll a[n];ll m=k;
   if(k==n)
    cout << -1  << endl;
   else{memset(a,0,sizeof(a));
        a[0]=1;
   for(int i=1;i<n&&k;i++){
      a[i]=i+1;k--;
     }
     if(a[n-1]==0)
     a[0]=m+2,a[n-1]=1;
     if(m==n-2){
        a[0]=n;
        a[n-1]=1;
     }
     else
     for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=i+2;
        }
     }
     for(int i=0;i<n;i++)
        cout << a[i] << " ";
     cout << endl;
   }
}
