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
   ll a[n];
   for(int i=0;i<n;i++)cin >> a[i];
   ll sum = 0;
   for(int i=0;i<k;i++)
    sum +=a[i];
   ll p=sum;
   for(int i=k;i<n;i++){
      p-=a[i-k];
      p+=a[i];
      sum+=p;
   }
   //cout << sum << endl;
   double d = 1.00*(n-k+1);
   cout << setprecision(10) <<fixed;
   cout << sum/d << endl;
}
