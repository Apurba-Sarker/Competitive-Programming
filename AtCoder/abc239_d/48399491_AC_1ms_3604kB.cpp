#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;

int main()
{
  /* ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll T123;
   cin >> T123;
   while(T123--){

   }*/
  int primes[46] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61,
 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157,
 163, 167, 173, 179, 181, 191, 193, 197, 199};
    ll a,b,c,d; cin >> a >> b >> c >> d;
    {
        ll f=0;
        for(int i=a;i<=b;i++){
            for(int j=0;j<46;j++){
                if(primes[j]>i){
                    ll o = primes[j]-i;
                      //cout << i << " " << o << endl;
                     if(o>=c&&o<=d){f++;break;}
                }
            }
        }
        ll p=0;
       /* for(int i=0;i<25;i++){
            if(primes[i]<=a)
                p++;
            else break;
        } cout << p << " " << f << endl;*/
       if(p+f==b-a+1)cout << "Aoki" <<endl;
       else cout << "Takahashi" << endl;
    }
}
