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
   vector <ll> p;
   for(ll i=1;i<=100005;i++){
      ll z = i;
      vector <ll> v;
      while(z){
        v.push_back(z%10);
        z=z/10;//cout << z << endl;
      }//cout <<1  << endl;
      ll f=0;
      for(int j=0;j<v.size()/2;j++){
          if(v[j]!=v[v.size()-1-j])f=1;
      }
      if(f==0)
        p.push_back(i);
   }
   //cout << 1 << endl;
   ll palindrome[100005];memset(palindrome,0,sizeof(palindrome));
   for(int i=0;i<p.size();i++)
    palindrome[p[i]]=1;
   ll T123;
   cin >> T123;
   while(T123--){
     ll l,r;cin >> l >> r;
     ll ans = 0;
     for(int i=l;i<=r;i++)
        if(palindrome[i])
           ans+=i;

      cout << ans << endl;
   }
}
