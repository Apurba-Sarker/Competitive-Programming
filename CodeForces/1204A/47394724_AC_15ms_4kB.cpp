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
      ll n;cin >> n;
      ll ans=0;

   }*/
   string n;
   cin >> n;
   ll ans = n.size();
   sort(n.begin(),n.end());
    ans+=(n[ans-2]==n[ans-1]);
   cout << ans/2 << endl;
}
