#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      ll a[n];
      for(int i=0;i<n;i++)
        cin >> a[i];
      ll ans = 0;
      map <ll,ll> m;
      for(int i=0;i<n;i++){
         if(m[a[i]]!=0)
           ans= 1;
         m[a[i]]++;
      }
      if(ans==1||n%2==0||n%2==1&&!is_sorted(a,a+n))
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
   }
}