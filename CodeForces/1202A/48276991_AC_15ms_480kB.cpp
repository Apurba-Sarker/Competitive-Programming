#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;

ll power(ll n){
   ll x = 1;
   while(n>0){
      n--;x*=2;
   }
   return x;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll T123;
   cin >> T123;
   while(T123--){
       string x,y;cin >> x >> y;
       ll p=y.size()-1,q=0;
       while(p>=0&&y[p]=='0'){
            //cout << y[p] << " " << p << endl;
            p--;q++;
       }
       //if(y[y.size()-1]=='1')
       p++;
       ll ans = 0;
       //cout << p << endl;
       reverse(x.begin(),x.end());
       for(int i=q;i<x.size();i++){
         if(x[i]=='0')
            ans++;
         else
            break;
       }
       cout << ans << endl;
   }
}
