#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define all(v) v.begin(), v.end()
const int mx = 1e6;


void solve() {
    int n; cin>>n;
    string s; cin>>s;
    vector<set<int>>v(26);
    for(int i=0;i<n;i++){
        v[s[i]-'a'].insert(i);
    }
    int q; cin>>q;
    while(q--){
        int t; cin>>t;
        if(t==1){
            int i;
            char c;
            cin>>i>>c;
            i--;
            v[s[i]-'a'].erase(i);
            v[c-'a'].insert(i);
            s[i]=c;
        }else{
            int l,r; cin>>l>>r;
            l--;r--;
            int ans=0;
            for(int i=0;i<26;i++){
                auto ll=v[i].lower_bound(l);
                auto rr=v[i].upper_bound(r);

                ans+=(ll!=rr);
            }

            cout<<ans<<'\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++) {
        //cout<<"Case "<<i<<": ";
        solve();
    }
}