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
      ll n,q; cin >> n >> q;
      string s; cin >> s;
      for(int i=0;i<q;i++){
        ll l,r; cin >> l >> r;
        ll f=0;
        for(int j=0;j<l-1;j++){
            if(s[j]==s[l-1])
                f++;
        }
         for(int j=r;j<n;j++){
            if(s[j]==s[r-1])
                f++;
        }
        if(f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
      }
   }
}
