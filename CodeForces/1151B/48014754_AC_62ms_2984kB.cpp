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
   ll n,m; cin >> n >> m;
   ll a[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> a[i][j];
    }
   }
   ll p[n],ans=0;
   for(int i=0;i<n;i++){
     ans^=a[i][0];p[i]=1;
   }
   if(ans){
     cout << "TAK" << endl;
     for(int i=0;i<n;i++)
        cout << p[i] << " ";
     cout << endl;
   }
   else{
      for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][0]!=a[i][j]){
                ans=1;
                p[i]=j+1;break;
            }
        }
        if(ans)
            break;
      }
   if(ans){
     cout << "TAK" << endl;
     for(int i=0;i<n;i++)
        cout << p[i] << " ";
     cout << endl;
   }
   else
    cout << "NIE" << endl;}
}
