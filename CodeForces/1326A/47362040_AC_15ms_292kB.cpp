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
      if(n==1)
        cout << -1 << endl;
      else if(n==2)
        cout << 23 << endl;
      else{
        string s="";
        n--;s+='2';
        while(n--)
            s+='3';
        cout << s << endl;
      }
   }
}
