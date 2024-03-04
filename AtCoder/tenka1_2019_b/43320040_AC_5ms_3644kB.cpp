 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;
//ll m = 998244353;
// A 65 Z 90 a 97 z 122


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   /*ll T123;
   cin >> T123;
   while(T123--){

   }*/
   ll n,k;
   string s;
   cin >> n >> s >> k;
   for(int i=0;i<n;i++){
     if(s[i]!=s[k-1])
        s[i]='*';
   }
   cout << s << endl;
}
