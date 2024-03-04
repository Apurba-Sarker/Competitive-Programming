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
   for(int i=0;i<n;i++) cin >> a[i];
   map <ll,ll> m;
   for(int i=0;i<n;i++)
     m[a[i]]++;
   ll ans = 0;
   for(int i=0;i<n;i++){
     if(m[a[i]]&&m[a[i]]>a[i])
        ans+=m[a[i]]-a[i];
     else if(m[a[i]]&&m[a[i]]<a[i])
        ans+=m[a[i]];
     m[a[i]]=0;
   }
   cout << ans << endl;
}
