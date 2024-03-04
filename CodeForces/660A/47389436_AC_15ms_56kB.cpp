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
   ll a[n];
   for(int i=0;i<n;i++)cin >> a[i];
   vector< ll> v;v.push_back(a[0]);
   for(int i=1;i<n;i++){
     if(__gcd(a[i],a[i-1])>1)
        v.push_back(1);
      v.push_back(a[i]);
   }
   cout << v.size()-n << endl;
   for(int i=0;i<v.size();i++)
    cout << v[i] << " ";
   cout << endl;
}
