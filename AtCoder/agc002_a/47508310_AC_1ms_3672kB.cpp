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
   ll ans = 1;
   ll a,b;
   cin >> a >> b;
   if(a*b<0)
    cout << "Zero" << endl;
   else if(a<0&&b<0){
     ans  = (b-a)+1;
     if(ans%2)cout << "Negative" << endl;
     else cout << "Positive" << endl;
   }
   else{
cout << "Positive" << endl;
   }
}
