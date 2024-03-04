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
   string s;
   cin >> s;
   ll ans = 0,n = s.size();
   for(int i=0;i<n/2;i++){
      if(s[i]!=s[n-1-i])
        ans++;
   }
   cout << ans << endl;
}
