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
   ll n,k;cin >> n >> k;
   string s; cin >> s;
   ll a[26];
   memset(a,0,sizeof(a));
   for(int i=0;i<n;i++)
    a[s[i]-'A']++;
    ll x = LONG_MAX;
    for(int i=0;i<k;i++)
        x = min(x,a[i]);
    cout << x*k << endl;
}
