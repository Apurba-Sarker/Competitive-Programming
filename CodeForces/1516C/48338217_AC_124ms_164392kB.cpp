#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;

ll dp[105][200005];
ll n,a[105],sum;

ll coinChnage(ll i,ll s){

   if(s<0)return LONG_MAX;

   if(i==n&&s>0)
    return LONG_MAX;
    if(i==n&&s==0)return 0;
   if(dp[i][s])
    return dp[i][s];

   ll r1 = 1+coinChnage(i+1,s-a[i]);
   ll r2 = coinChnage(i+1,s);

    dp[i][s]=min(r1,r2);

    return dp[i][s];

}

int main()
{
   /*ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll T123;
   cin >> T123;
   while(T123--){

   }*/
   memset(dp, 0, sizeof dp);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    //sort(a,a+n);
    for(int i=0;i<n;i++)sum+=a[i];
    //sum/=2;
    if(sum%2)
        cout << 0 << endl;
    else{
        sum/=2;
        long x = coinChnage(0,sum);
        //cout << x << endl;
        if(x==0||x==LONG_MAX)
            cout << 0 << endl;
        else{
            cout << 1 << endl;
            long ans = 0;
            for(int i=0;i<n;i++){
                if(a[i]%2){
                    ans=i+1;break;
                }
            }
            if(ans)cout << ans << endl;
            else{
                while(1) {
                for(int i = 0; i < n; i++) {
                    if(a[i] & 1) {
                        cout << i + 1 << '\n';
                        return 0;
                    }
                    a[i] /= 2;
                }
            }
            }
        }
    }
}
