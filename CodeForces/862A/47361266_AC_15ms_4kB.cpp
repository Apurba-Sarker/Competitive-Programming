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
   ll n,x;
   cin >> n >> x;
   ll a[n];
   for(int i=0;i<n;i++)
      cin >> a[i];
   sort(a,a+n);
   ll p = x;
   for(int i=0;i<n;i++){
     if(a[i]<x)
        p--;
     if(a[i]==x)
        p++;
   }
   cout << p << endl;
}
