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
   string s;
   cin >> s;
   ll u=0,d=0,l=0,r=0;
   for(int i=0;i<n;i++){
      if(s[i]=='U')u++;
      if(s[i]=='D')d++;
      if(s[i]=='L')l++;
      if(s[i]=='R')r++;
   }
   cout << 2*min(l,r)+2*min(u,d) << endl;
}
