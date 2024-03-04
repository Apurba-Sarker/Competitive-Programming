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
   //ll T123;
   //cin >> T123;
   //while(T123--){
      ll x1,x2,v1,v2;
      cin >> x1 >> v1 >> x2 >> v2;
      if(v1==v2&&x1!=x2)
        cout << "NO" << endl;
      else if((x1-x2)%(v2-v1)==0&&(x1-x2)*(v2-v1)>=0)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
   //}
}
