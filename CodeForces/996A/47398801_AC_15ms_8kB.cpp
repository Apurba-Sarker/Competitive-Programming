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
   ll ans = 0;
   if(n>=100){
     ans+=(n-n%100)/100;n%=100;
   }
   if(n>=20){
     ans+=(n-n%20)/20;n%=20;
   }
   if(n>=10){
     ans+=(n-n%10)/10;n%=10;
   }
   if(n>=5){
     ans+=(n-n%5)/5;n%=5;
   }
   if(n>=1){
     ans+=(n-n%1)/1;n%=1;
   }
   cout << ans << endl;
}
