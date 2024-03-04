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
   ll a[n]; for(int i=0;i<n;i++)cin >> a[i];
   ll m;cin >> m;
   ll b[m]; for(int i=0;i<m;i++)cin >> b[i];
   sort(a,a+n);
   sort(b,b+m);
    cout << a[n-1] << " " << b[m-1] << endl;
}
