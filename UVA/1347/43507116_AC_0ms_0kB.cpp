 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;
//ll m = 998244353;
// A 65 Z 90 a 97 z 122

ll n;
double x[1005],y[1005],dp[1005][1005];

double distance(ll a,ll b){
   double h = sqrt((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]));
   return h;
}

double solve(ll a, ll b){
   if(dp[a][b]!=-1)return dp[a][b];
   if(a==n-1){
     return dp[a][b] = dp[b][a] = distance(a,b);
   }
   return dp[a][b] = dp[b][a] =
        min(solve(a+1,b)+distance(a,a+1),
            solve(a+1,a)+distance(b,a+1));
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   /*ll T123;
   cin >> T123;
   while(T123--){

   }*/
   cout << fixed << setprecision(2);
   while(cin >> n){
       for(int i=0;i<n;i++)
        cin >> x[i] >> y[i];
       for(int i=0;i<n;i++){
          for(int j=0;j<n;j++)
            dp[i][j]=-1;
       }
       cout << solve(0,0) << endl;
   }
}
