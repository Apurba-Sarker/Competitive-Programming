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
       ll a[26];
       memset(a,0,sizeof(a));
       for(int i=0;i<n;i++)
        a[s[i]-'a']++;
       ll f=0;
       for(int i=0;i<26;i++)
        if(a[i]%2)
           f++;
       if(f)
        cout << "NO" << endl;
       else
        cout << "YES" << endl;
   }
}
