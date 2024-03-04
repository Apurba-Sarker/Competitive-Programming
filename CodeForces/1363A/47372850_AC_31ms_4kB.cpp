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
   ll T123;
   cin >> T123;
   while(T123--){
      ll n,x;
      cin >> n >> x;
      ll a[n];
      for(int i=0;i<n;i++)
        cin >> a[i];
      ll e=0,o=0;
      for(int i=0;i<n;i++){
        if(a[i]%2)o++;else e++;
      }
      if(o==0)
        cout << "NO" << endl;
      else if(e==0&&x%2==0)
        cout << "NO" << endl;
      else if(e==0&&x%2==1)
        cout << "YES" << endl;
      else if(e>=x-1)
        cout << "YES" << endl;
      else{
        x-=e;
        if(x%2==0&&o==x)
            cout << "NO" << endl;
        else
            cout << "YES"  << endl;
      }
   }
}
