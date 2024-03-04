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
      string s;cin >> s;
      ll n = s.size();ll f=ll(s[0]-'a');
      //cout << f << endl;
      while(s[0]!='a'){
        f--;
        s=char('a'+(f))+s;//cout << 1 << endl;
      }
      f = ll(s[s.size()-1]-'a');
      //f++;
      //cout << s+char('a'+(f));
     while(s[s.size()-1]!='z'){//cout << s << endl;
        f++;
        s=s+char('a'+(f));
      }
      ll ans = 0;
      if((s.size())%26){
        cout << "NO" << endl;
      }
      else{
            ll ans=0;string g="abcdefghijklmnopqrstuvwxyz";
      for(int i=0;i<s.size();i+=26){
         for(int j=i;j<i+26;j++){
            if(s[j]!=g[j-i])
                ans=1;
         }
      }
        if(ans)cout << "NO" << endl;
        else
            cout << "YES" << endl;
      }
   }
}
