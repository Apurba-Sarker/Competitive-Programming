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
   string s;cin >> s;
   if(s.size()<7)
    cout << "NO" << endl;
   else{
     string x = "keyence";
     ll f=0;
     ll n = s.size();
     for(int i=0;i<7;i++){
        if(s[i]!=x[i])f++;
     }
     if(f==0){
        cout << "YES" <<endl;
        return 0;
     }
     f=0;
     for(int i=n-7;i<n;i++){
        if(s[i]!=x[i-n+7])f++;
     }
     if(f==0){
        cout << "YES" <<endl;
        return 0;
     }
     ll p = 0;
     while(p<7&&s[p]==x[p])p++;
     //cout << p << endl;
     f=0;
     for(int i=7-p;i>0;i--){
         if(x[7-i]!=s[n-i])
            f++;
        //cout << s[n-i] << endl;
     }
     if(f==0){
        cout << "YES" <<endl;
        return 0;
     }
     cout << "NO" << endl;
   }
}
