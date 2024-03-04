 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;
//ll m = 998244353;
// A 65 Z 90 a 97 z 122

map<pair<ll,ll>,ll> m;
ll f;

bool cmp (pair<ll, ll> a, pair<ll, ll> b) {
  int x1 = a.first, x2 = b.first,
      y1 = a.second, y2 = b.second,
      z1 = m[a], z2 = m[b];
  if (x1 < x2) return true;
  else if (x1 == x2 && y1 < y2) return true;
  else if (x1 == x2 && y1 == y2 && z1 < z2) return true;
  else return false;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   /*ll T123;
   cin >> T123;
   while(T123--){

   }*/
   while(1){
   ll n;
   cin >> n;
   f++;
   if(n==0)
    return 0;
   else{
        //f++;
    m.clear();
     vector <pair<ll,ll>> v;
     //map <pair<ll,ll>,ll> m;
     for(int i=0;i<n;i++){
     ll x,y,z;
     cin >> x >> y >> z;
     if(m[make_pair(min(x,y),max(x,y))]==0){
        v.push_back(make_pair(min(x,y),max(x,y)));
        m[make_pair(min(x,y),max(x,y))]=z;
     }
     else{
        m[make_pair(min(x,y),max(x,y))]=max(z,m[make_pair(min(x,y),max(x,y))]);
     }
     if(m[make_pair(min(x,z),max(x,z))]==0){
        v.push_back(make_pair(min(x,z),max(x,z)));
        m[make_pair(min(x,z),max(x,z))]=y;
     }
     else{
        m[make_pair(min(x,z),max(x,z))]=max(y,m[make_pair(min(x,z),max(x,z))]);
     }
     if(m[make_pair(min(y,z),max(y,z))]==0){
        v.push_back(make_pair(min(y,z),max(y,z)));
        m[make_pair(min(y,z),max(y,z))]=x;
     }
     else{
        m[make_pair(min(y,z),max(y,z))]=max(x,
                                m[make_pair(min(y,z),max(y,z))]);
       }
     }
     n = v.size();
     //cout << n << endl;
     sort(v.begin(),v.end(),cmp);
     ll dp[n];
     memset(dp,0,sizeof(dp));
     for(int i=0;i<n;i++){
            dp[i]=m[make_pair(v[i].first,v[i].second)];
        for(int j=0;j<i;j++){
            if(v[i].first>v[j].first&&v[i].second>v[j].second&&
                 dp[i]<dp[j]+m[make_pair(v[i].first,v[i].second)])
                dp[i] = dp[j]+m[make_pair(v[i].first,v[i].second)];
        }
     }
    sort(dp,dp+n);
   // cout << f << endl;
    cout << "Case " << f<< ": maximum height = "<< dp[n-1] << endl;
    //f++;
   }
}
}
