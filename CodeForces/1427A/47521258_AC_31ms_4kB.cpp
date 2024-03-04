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
     ll n;cin >> n;
     ll a[n];
     for(int i=0;i<n;i++)cin >> a[i];
     sort(a,a+n);
     ll ans = 0;
     for(int i=0;i<n;i++)
        ans+=a[i];
     if(ans==0)
        cout << "NO" << endl;
     else{
        cout << "YES" <<  endl;
        ll x=0,y=0;
         for(int i=0;i<n;i++){
             if(a[i]<0)x+=a[i]*-1;
            else y+=a[i];
         }
         if(y>x)reverse(a,a+n);
        for(int i=0;i<n;i++)
            cout << a[i] << " ";
        cout << endl;
     }
   }
}
