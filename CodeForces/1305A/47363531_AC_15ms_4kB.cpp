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
      sort(a,a+n);
      sort(b,b+n);
      for(int i=0;i<n;i++)cout << a[i] << " ";cout << endl;
      for(int i=0;i<n;i++)cout << b[i] << " ";cout << endl;
   }
}
