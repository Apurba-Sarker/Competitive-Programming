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
   ll ans=0;
   for(ll i=1;(i*(i+1))/2<n;i++){
    ans = i;
   }
   cout << n-(ans*(ans+1))/2 << endl;
}
