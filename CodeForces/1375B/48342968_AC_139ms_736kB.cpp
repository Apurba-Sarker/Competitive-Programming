#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;
ll n,m;

ll a[305][305];

ll setit(ll i,ll j){

    ll x = a[i][j];
    if(i-1>=0&&x>0&&a[i-1][j]==0)a[i-1][j]=1,x--;
    else if(i-1>=0&&a[i-1][j]&&x>0)x--;

    if(j-1>=0&&x>0&&a[i][j-1]==0)a[i][j-1]=1,x--;
    else if(j-1>=0&&a[i][j-1]&&x>0)x--;

    if(i+1<n&&x>0&&a[i+1][j]==0)a[i+1][j]=1,x--;
    else if(i+1<n&&a[i+1][j]&&x>0)x--;

    if(j+1<m&&x>0&&a[i][j+1]==0)a[i][j+1]=1,x--;
    else if(j+1<m&&a[i][j+1]&&x>0)x--;
    return 0;
}

void setit2(ll i,ll j){

ll x = 0;
    if(i-1>=0&&a[i-1][j])x++;
    //else if(i-1>=0&&a[i-1][j]&&x>0)x--;

    if(j-1>=0&&a[i][j-1])x++;
    //else if(j-1>=0&&a[i][j-1]&&x>0)x--;

    if(i+1<n&&a[i+1][j])x++;
    //else if(i+1<n&&a[i+1][j]&&x>0)x--;

    if(j+1<m&&a[i][j+1])x++;
    //else if(j+1<m&&a[i][j+1]&&x>0)x--;
    a[i][j]=x;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll T123;
   cin >> T123;
   while(T123--){
      cin >> n >> m;
      //ll a[n][m];
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
      }
      ll f=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i!=0&&j!=0&&i!=n-1&&j!=m-1&&a[i][j]>4)f++;
            if(!(i!=0&&j!=0&&i!=n-1&&j!=m-1)&&a[i][j]>3)f++;
        }
     }
     if(a[0][0]>2)f++;
     if(a[0][m-1]>2)f++;
     if(a[n-1][0]>2)f++;
     if(a[n-1][m-1]>2)f++;
     if(f)
        cout << "NO" << endl;
     else{
        cout << "YES" << endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            if(a[i][j]!=0)
                setit(i,j);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            if(a[i][j]!=0)
                setit2(i,j);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
     }
   }
}
