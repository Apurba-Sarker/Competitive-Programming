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
   ll n,k; cin >> n >> k;
   vector <ll> v;
   for(ll i=1;i*i<=n;i++){
      if(n%i==0){
         v.push_back(i);
         v.push_back(n/i);
      }
   }
   sort(v.begin(),v.end());
   vector <ll> b;
   b.push_back(v[0]);
   for(int i=1;i<v.size();i++){
    if(v[i-1]!=v[i])
        b.push_back(v[i]);
   }k--;
  // cout << b.size() << endl;
   if(k>b.size()-1)  //oihwpihgowj[o
    cout << -1 << endl;
   else
    cout << b[k] << endl;
}
