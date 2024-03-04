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
   ll n,k;cin >> n >> k;
   vector < ll> v;
   ll m=n;
   for(int i=2;i*i<=n;i++){
      while(n%i==0){
        v.push_back(i);n/=i;
      }
   }
   if(n>1){
     v.push_back(n);
   }
   if(k==1)
    cout << m << endl;
   else if(v.size()<k)
    cout << -1 << endl;
    else if(v.size()==k){
        for(int i=0;i<v.size();i++)
            cout << v[i] << " ";cout << endl;
    }
   else{
     k--;ll i=0;
     while(k--){
        cout << v[i] << " ";
        m/=v[i];i++;
     }
     cout << m << endl;
   }
}
