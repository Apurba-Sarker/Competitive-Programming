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
   sort(a,a+n);
   swap(a[n-1],a[n-2]);
   swap(a[n-1],a[n-3]);
   ll f=0;
   if(a[0]+a[n-2]<=a[n-1])f=1;
   if(a[1]+a[n-1]<=a[0])f=1;
   for(int i=1;i<n-1;i++)
    if(a[i-1]+a[i+1]<=a[i])f=1;
   if(f)cout << "NO" << endl;
   else{
     cout << "YES" << endl;
     for(int i=0;i<n;i++)
        cout << a[i] << " ";cout << endl;
   }
}
