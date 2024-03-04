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
   string s1,h1;cin >> s1 >> h1;
   ll i=0;string s="",h="";
   while(s1[i]=='0')i++;
   for(;i<s1.size();i++)
    s+=s1[i];i=0;
   while(h1[i]=='0')i++;
   for(;i<h1.size();i++)
    h+=h1[i];
   if(s==h)
    cout << "=" << endl;
   else if(s.size()>h.size())
    cout << ">" << endl;
   else if(s.size()<h.size())
    cout << "<" << endl;
   else{
      for(int i=0;i<s.size();i++){
        if(s[i]>h[i]){
            cout << ">" << endl;return 0;
        }
        else if(s[i]<h[i]){
            cout << "<" << endl; return 0;
        }
      }
   }
}
