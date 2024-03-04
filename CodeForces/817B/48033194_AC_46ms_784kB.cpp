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
   ll n; cin >> n;
   ll a[n];for(int i=0;i<n;i++)cin >> a[i];
   sort(a,a+n);
   vector <ll> v;v.push_back(a[0]);
   for(int i=1;i<3;i++){
     if(a[i-1]!=a[i])
        v.push_back(a[i]);
   }
   map <ll,ll> m;
   for(int i=0;i<v.size();i++){
     for(int j=0;j<n;j++){
        if(a[j]==v[i])
            m[v[i]]++;
     }
   }
   ll ans=0;
   if(v.size()==3){
      ans = m[v[0]]*m[v[1]]*m[v[2]];
      //ans/=6;
   }
   else if(v.size()==1){
     ans = (m[v[0]])*(m[v[0]]-1)*(m[v[0]]-2);ans/=6;
   }
   else{
     if(m[v[0]]==1){
        ans = (m[v[0]])*(m[v[1]])*(m[v[1]]-1);//ans/=6;
     }
     else
        ans=(m[v[1]])*(m[v[0]])*(m[v[0]]-1);
        ans/=2;
   }
   cout << ans << endl;
}
