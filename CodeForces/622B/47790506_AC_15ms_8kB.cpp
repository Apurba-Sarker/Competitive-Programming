#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;

int main()
{
   /*ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll T123;
   cin >> T123;
   while(T123--){

   }*/
      string s;
      cin >> s;
      ll x;cin >> x;
     // string p = "";p+=s[0];p+=s[1];
      //string p1 = "";p1+=s[3];p1+=s[4];
      ll h = 10*(s[0]-'0')+(s[1]-'0');
      ll m = 10*(s[3]-'0')+(s[4]-'0');
      //ll m = stoi(p1);
      //cout << h << ":" << m << endl;
      ll mm=x%60;x/=60;
      ll hh=x%24;
      h+=hh;
      h%=24;
      m+=mm;
      if(m>=60)
        h++;
      h%=24;
      m%=60;
      //cout << h << ":" <<  m << endl;
      if(floor(log10(h))+1<2){
        cout << 0 << h;
      }
      else
        cout << h;
      cout << ":";
      if(floor(log10(m))+1<2){
        cout << 0 << m << endl;
      }
      else
        cout << m << endl;
}
