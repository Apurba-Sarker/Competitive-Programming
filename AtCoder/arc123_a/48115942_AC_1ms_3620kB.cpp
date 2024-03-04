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
   ll a,b,c;cin >> a >> b >> c;
   ll x = 2*b-a-c;
   if(x==0)
    cout << 0 << endl;
   else if(x<0){
      x = abs(x);
      if(x%2==0)
        cout << x/2 << endl;
      else{
        cout << 2+(x-1)/2 <<endl;
      }
   }
   else
    cout << x << endl;
}
