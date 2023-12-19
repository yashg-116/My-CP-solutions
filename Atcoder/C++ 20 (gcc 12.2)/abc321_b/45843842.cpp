#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        ll s,c;
        cin>>s>>c;
        m[s]+=c;
    }
    ll ans=0;
    while(!m.empty()){
        ll f=(*m.begin()).first;
        ll s=(*m.begin()).second;
        if(s&1)ans++;
        m.erase(m.begin());
        if(s>=2){
            m[2*f]+=s/2;
        }
    }
    
    cout<<ans<<'\n';
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    t=1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}
