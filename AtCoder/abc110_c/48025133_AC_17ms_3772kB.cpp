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
   string s,t;
   cin >> s >> t;
   map <char,ll> ms,mt;
   map <pair<char,char>,ll> m1;
   ll f=0;
   for(int i=0;i<s.size();i++){
      ms[s[i]]++;
      mt[t[i]]++;
      m1[make_pair(s[i],t[i])]++;
      if(ms[s[i]]!=mt[t[i]]||ms[s[i]]!=m1[make_pair(s[i],t[i])]||mt[t[i]]!=m1[make_pair(s[i],t[i])])
        f++;
   }
   if(f)
    cout << "No" << endl;
   else
    cout << "Yes" << endl;
}
