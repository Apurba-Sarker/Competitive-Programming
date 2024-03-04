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
      ll a[2*n];
      for(int i=0;i<2*n;i++)
        cin >> a[i];
      vector <ll> e;
      vector <ll> o;
      for(int i=0;i<2*n;i++){
        if(a[i]%2)o.push_back(i+1);
        else e.push_back(i+1);
      }
      /*if(o.size()&&e.size()){
      ll x = min(o.size(),e.size());
      //if(o.size()==n)
        x-=1;
      for(int i=0;i<x;i++)
        cout << o[i] << " " << e[i] << endl;
      if(o.size()>e.size()){
         for(int i=x;i+2<o.size();i+=2)
            cout << o[i] << " " << o[i+1] << endl;
      }
      else if(o.size()<e.size()){
         for(int i=x;i+2<e.size();i+=2)
            cout << e[i] << " " << e[i+1] << endl;
      }
      }
      else*/{
          //if(o.size()>e.size()){
          ll c=0;
         for(int i=0;i+1<o.size()&&c<n-1;i+=2)
            {cout << o[i] << " " << o[i+1] << endl;c++;}
      //}
      //else if(o.size()<e.size()){
         for(int i=0;i+1<e.size()&&c<n-1;i+=2)
            {cout << e[i] << " " << e[i+1] << endl;c++;}
      //}
      }
   }
}
