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
   ll c[n];
   for(int i=0;i<n;i++)cin >> c[i];
   ll x=0;
   ll y=0;
   for(int i=0;i<n;i++){
     if(c[i]!=c[0])y=i;
   }
   ll x1=n-1;
   ll y1=n-1;
   for(int i=n-1;i>=0;i--){
     if(c[i]!=c[n-1])y1=i;
   }
   cout << max(y-x,x1-y1) << endl;
}
