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
   ll a[n],b[n];
   for(int i=0;i<n;i++)
    cin >> a[i] >> b[i];
   map <ll,ll> m;
   for(int i=0;i<n;i++){
     m[a[i]]+=b[i];
   }
   vector <pair<ll,ll>> v;
   for(auto i:m){
     v.push_back(make_pair(i.first,i.second));
   }
   sort(v.begin(),v.end());
   vector <pair<ll,ll>> ans;
   ans.push_back(make_pair(v[0].first,v[0].second));
   for(int i=1;i<v.size();i++){
      ans.push_back(make_pair(v[i].first,ans[ans.size()-1].second+v[i].second));
   }
   if(k<=ans[0].second){
     cout << ans[0].first << endl;
   }
   else{
      for(int i=1;i<n;i++){
        ll l=ans[i-1].second+1,r=ans[i].second;
        if(k>=l&&k<=r){
            cout << ans[i].first << endl;
            break;
        }
      }
   }
}
