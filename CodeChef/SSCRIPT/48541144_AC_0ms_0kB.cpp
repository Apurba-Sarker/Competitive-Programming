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
      ll k,n; cin >> n >> k;
      string s; cin >> s;
      ll ans = 0;
      ll x=0;
      for(int i=0;i<n;i++){
        if(s[i]=='*')x++;
        else{
            ans = max(ans,x);x=0;
        }
      }
      ans = max(ans,x);
      if(ans>=k)cout << "YES" << endl;
      else
        cout << "NO" << endl;
   }
}
