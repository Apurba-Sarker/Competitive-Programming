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
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll ans=1,cunt=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                ans*=2;
                ans%=MOD;
                cunt++;
            }
        }
        if(cunt==n)ans--;
        cout<<ans<<endl;
   }
}
