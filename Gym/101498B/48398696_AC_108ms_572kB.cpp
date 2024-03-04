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
      string a,b;ll ans = 0;
      cin >> a >> b;
      ll c[26];
      memset(c,0,sizeof(c));
      for(int i=0;i<b.size();i++)
        c[b[i]-'a']++;
      for(int i=0;i<a.size();i++){
         if(c[a[i]-'a']==0)break;
         else{
            ans++;
            c[a[i]-'a']--;
         }
      }
      cout << ans << endl;
   }
}
