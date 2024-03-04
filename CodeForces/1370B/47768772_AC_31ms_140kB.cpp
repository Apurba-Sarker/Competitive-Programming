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
      ll n;
      cin >> n;
      ll a[2*n];
      for(int i=0;i<2*n;i++)
        cin >> a[i];
      vector <pair<ll,ll>> e,o;
      for(int i=0;i<2*n;i++)
        if(a[i]%2)o.push_back(make_pair(a[i],i+1));
        else e.push_back(make_pair(a[i],i+1));
      ll f=0;
      for(int i=0;i+1<e.size()&&f<n-1;i+=2)
        {cout << e[i].second << " " << e[i+1].second << endl;f++;}
      for(int i=0;i+1<o.size()&&f<n-1;i+=2)
        {cout << o[i].second << " " << o[i+1].second << endl;f++;}
   }
}
