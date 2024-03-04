#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;

string s[10];

ll test(ll x, ll y){
   string h[10];
   for(int i=0;i<10;i++)h[i]=s[i];
   h[x][y] = 'X';
   ll f=0;
   for(int i=0;i<10;i++){
     for(int j=0;j+4<10;j++){
        ll c=0;
        for(int k=j;k<j+5;k++){
            if(h[i][k]=='X')c++;
        }
     if(c==5)f++;
     }
   }
   for(int i=0;i<10;i++){
     for(int j=0;j+4<10;j++){
        ll c=0;
        for(int k=j;k<j+5;k++){
            if(h[k][i]=='X')c++;
        }
     if(c==5)f++;
     }
   }
   for(int i=0;i<=5;i++){
     for(int j=0;j<=5;j++){
            ll c=0;
        for(int k=0;k<5;k++){
             if(h[i+k][j+k]=='X')c++;
        }
         if(c==5)f++;
     }
   }
   for(int i=0;i<=5;i++){
     for(int j=9;j>=4;j--){
            ll c=0;
        for(int k=0;k<5;k++){
             if(h[i+k][j-k]=='X')c++;
             //cout << c << endl;
        }
         if(c==5)f++;
     }
   }
   return f;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   /*ll T123;
   cin >> T123;
   while(T123--){

   }*/
   for(int i=0;i<10;i++)
    cin >> s[i];
   for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
         if(s[i][j]=='.'){
            if(test(i,j)){
                cout << "YES" << endl;return 0;
            }
         }
      }
   }
   cout << "NO" << endl;
}
