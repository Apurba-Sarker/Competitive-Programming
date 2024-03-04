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
   ll n; cin >> n;ll a[n];
   for(int i=0;i<n;i++)
    cin >> a[i];
   sort(a,a+n);
   vector <ll> v;
   for(int i=0;i<1+(n-1)/2;i++){
       v.push_back(a[i]);
       if(1+(n-1)/2+i<n)
        v.push_back(a[1+(n-1)/2+i]);
   }
   ll f=0;
   for(int i=2;i<n;i+=2){
      if(v[i-1]<v[i])f=1;
   }
   for(int i=1;i<n;i+=2){
      if(v[i-1]>v[i])f=1;
   }
   if(f)
    cout << "Impossible" << endl;
   else{
    for(int i=0;i<n;i++)
        cout << v[i] << " ";cout << endl;
   }
}
