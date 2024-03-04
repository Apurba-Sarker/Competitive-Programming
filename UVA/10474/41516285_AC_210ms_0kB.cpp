#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int K = 20;
ll m = 998244353;
// A 65 Z 90 a 97 z 122

int main()
{
    /*int t;
    cin >> t;
    while (t--) {

    }*/
    ll c=1;
    while(c){
        ll n,q;
        cin >> n >> q;
        if(n==0&&q==0)
            break;
        else{
            ll a[n];
            for(int i=0;i<n;i++)
                cin >> a[i];
            //a[n]=LONG_MAX;
            sort(a,a+n);
            map <ll,ll> m;
            for(int i=0;i<n;i++){
                if(m[a[i]]==0)
                     m[a[i]]=i+1;
            }
            vector <ll> v;
            //a[n] = LONG_MAX;
            while(q--){
                ll b;
                cin >> b;
                v.push_back(b);
                //cout << "CASE# " << c << ":" << endl;
                //cout << b << " found at " << ans << endl;
            }
            cout << "CASE# " << c << ":" << endl;
            for(int i=0;i<v.size();i++){
                if(m[v[i]])
                cout << v[i] << " found at " << m[v[i]] << endl;
                else
                cout << v[i] << " not found" << endl;
            }
            c++;
        }
    }
}
