#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;

int main()
{
   //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   freopen("max-pair.in","r",stdin); //can need to change file . this one for taking input
   //freopen("output.txt","w",stdout);
   ll T123;
   cin >> T123;
   while(T123--){
       string s;
       cin >> s;
       ll n = s.size();
       if(s[0]!=s[n-1])
        cout << n-1 << endl;
       else{
          cout << n-2 << endl;
       }
   }
}
