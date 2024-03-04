#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;

int main()
{
   /*ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll T123;
   cin >> T123;
   while(T123--){

   }*/
   ll n;cin >> n;
   string s,h;cin >> s >> h;
   ll p=n;
   for(int i=0;i<n;i++){
      ll f=0,q=0;
      if(s[i]==h[0]){
            q=1;
         for(int j=i;j<n;j++){
            if(s[j]!=h[j-i])
                f=1;
         }
      }
      if(f==0&&q==1){
        p=i;break;
      }
   }//cout << p << endl;
   string ans  = s;
   for(int i=n-p;i<n;i++)
    ans+=h[i];
   cout << ans.size() << endl;
}
