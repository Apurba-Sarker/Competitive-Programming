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
      ll n,k;cin >> n >> k;
      ll a[n];
      for(int i=0;i<n;i++)cin >> a[i];
      ll x = a[0];
      for(int i=1;i<n;i++)x&=a[i];
      if(x<k)cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}
