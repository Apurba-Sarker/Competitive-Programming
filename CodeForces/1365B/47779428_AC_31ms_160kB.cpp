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
      ll a[n],b[n];
      for(int i=0;i<n;i++)cin >> a[i];
      for(int i=0;i<n;i++)cin >> b[i];
      vector <ll> v,g;
      for(int i=0;i<n;i++){
        if(b[i]==0)
            v.push_back(a[i]);
        else
            g.push_back(a[i]);
      }
      if(v.size()&&g.size())
        cout << "Yes" << endl;
      else if(g.size()==0&&is_sorted(v.begin(),v.end()))
        cout << "Yes" << endl;
      else if(v.size()==0&&is_sorted(g.begin(),g.end()))
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
   }
}
