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
      ll x;
      cin >> s
   }*/
   ll ans  = 0;
   string s;
   cin >> s;
   for(int i=0;i<s.size();i++){
    for(int j=i;j<s.size();j++){
        string g="";
        for(int k=i;k<=j;k++){
            g+=s[k];}
            string o = g;
            reverse(g.begin(),g.end());
            if(o==g){
                ans = max(ans,(ll)(j-i+1));
            }
    }
   }
   cout << ans << endl;
}
