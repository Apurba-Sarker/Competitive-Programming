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
      ll n;
      cin >> n;
      ll a[n];
      for(int i=0;i<n;i++)
        cin >> a[i];
      sort(a,a+n);
      reverse(a,a+n);
      ll ans = a[0];
      ll f=0;
      for(int i=1;i<n;i++){
          ll x= ans&a[i];
          if(x==a[i]){
              //ll x= ans&a[i];
            //cout << x << endl;
            f=1;break;
          }
          ans|=a[i];
      }
      if(f)
        cout << "NO" << endl;
      else
        cout << "YES" << endl;
   }
}
