#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;

int main()
{
  /* ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll T123;
   cin >> T123;
   while(T123--){

   }*/
   ll x1,y1,x2,y2;
   cin >> x1 >> y1 >> x2 >> y2;
   double d;
   d = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))) ;
   cout << setprecision(12);
   cout << d << endl;
}
