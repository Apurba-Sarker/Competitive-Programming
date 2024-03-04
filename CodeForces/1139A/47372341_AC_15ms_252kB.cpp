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
      ll n;string s;
      cin >> n >> s;ll c = 0;
      for(int i=0;i<n;i++){
        ll x = (ll)(s[i]-'0');
        if(x%2==0)c+=i+1;
      }
      cout << c << endl;
}
