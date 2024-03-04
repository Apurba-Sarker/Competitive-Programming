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
       string s;
       cin >> s;
       ll f=0;
       for(int i=0;i<n-1;i++)
        if(s[n-1]==s[i])
          f=1;
       if(f)
        cout << "YES" << endl;
       else
        cout << "NO" << endl;
   }
}
