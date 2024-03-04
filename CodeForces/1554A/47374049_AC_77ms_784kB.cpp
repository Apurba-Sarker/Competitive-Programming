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
       ll x=0;
       //ll p=0;
       for(int i=1;i<n;i++){
          x = max(x,a[i]*a[i-1]);
       }
       cout << x << endl;
   }
}
