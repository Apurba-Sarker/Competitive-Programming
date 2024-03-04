 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;
//ll m = 998244353;
// A 65 Z 90 a 97 z 122


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   /*ll T123;
   cin >> T123;
   while(T123--){

   }*/
   ll n;
   //string s;
   cin >> n;
   ll ans = 0;
   while(n>0){
     ll z = n;
     ll a = 0;
     while(z){
        a = max(a,z%10);z/=10;
     }
     n-=a;
     ans++;
   }
   cout << ans << endl;
}
