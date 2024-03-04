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
   ll n;cin >> n;
   string s;cin >> s;
   ll o=0,z=0;
   for(int i=0;i<n;i++){
     if(s[i]=='1')z++;
     if(s[i]=='0')o++;
   }
   if(z!=o){
     cout << 1 << endl;cout << s << endl;
   }
   else{
    cout << 2 << endl;
     cout << s[0] << " ";
     for(int i=1;i<n;i++)
        cout << s[i];
     cout << endl;
   }
}
