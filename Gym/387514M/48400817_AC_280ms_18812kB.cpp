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
  /* ll T123;
   cin >> T123;
   while(T123--){

   }*/
   ll n;cin >> n;
   ll a[n];
   for(int i=0;i<n;i++)cin >> a[i];
   vector <ll> c,b;
   for(int i=0;i<n;i++){
    if(a[i]%2)c.push_back(a[i]);
    else
        b.push_back(a[i]);
   }
   sort(c.begin(),c.end());
   reverse(c.begin(),c.end());
   sort(b.begin(),b.end());
   ll o= c.size();
   ll v= b.size();
   for(int i=0;i<o;i++)
     cout << c[i] << " ";
   for(int i=0;i<v;i++)
    cout  << b[i] << " ";
   cout << endl;
}
