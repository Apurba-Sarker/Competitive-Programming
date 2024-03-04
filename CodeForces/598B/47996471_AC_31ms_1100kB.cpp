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
   //cin >> T123;
   /*while(T123--){

   }*/
   string s;cin >> s;
   ll m;cin >> m;
   //string g = "";
   for(int i=0;i<m;i++){
      ll l,r,k;cin >> l >> r >> k;//cout << 1 << endl;
      //r--;
      string g="";
      for(int j=0;j<l-1;j++)
        g+=s[j];
      //cout << 1 << endl;}
      k%=(r-l+1);//cout << 1;
      for(int j=r-k;j<=r-1;j++)
        g+=s[j];
      for(int j=l-1;j<r-k;j++)
        g+=s[j];
      for(int j=r;j<s.size();j++)
        g+=s[j];
      s = g;
      //cout << s << endl;
   }
   cout << s << endl;
}
