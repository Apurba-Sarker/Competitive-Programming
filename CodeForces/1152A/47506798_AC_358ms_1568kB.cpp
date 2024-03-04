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
   ll n,m;cin >> n >> m;
   ll a[n];for(int i=0;i<n;i++)cin >> a[i];
   ll b[m];for(int i=0;i<m;i++)cin >> b[i];
   ll o=0,e=0,o1=0,e1=0;
   for(int i=0;i<n;i++){
      if(a[i]%2)o++;
      else e++;
   }
   for(int i=0;i<m;i++){
      if(b[i]%2)o1++;
      else e1++;;
   }
   cout << min(o,e1)+min(o1,e) <<  endl;
}
