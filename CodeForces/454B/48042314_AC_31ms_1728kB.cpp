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
      ll ans = 0,p=0;
      for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            ans++;p=i;break;
        }
      }
      if(ans==0){
        cout << 0 << endl;
      }
      else{
         deque <ll> d;
         for(int i=0;i<n;i++)
            d.push_back(a[i]);
         ll c = n-p;
         while(c--){
            ll o = d[d.size()-1];
            d.pop_back();
            d.push_front(o);
         }
         ll f=0;
         for(int i=1;i<d.size();i++){
            if(d[i-1]>d[i])
                f=1;
         }
         if(f)
            cout << -1 << endl;
         else
            cout << n-p << endl;
      }
}
