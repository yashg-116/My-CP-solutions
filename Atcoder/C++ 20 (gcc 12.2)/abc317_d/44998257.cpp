#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>
ll dp[101][100001];
ll find(int i, vector<pair<ll,ll>>&v, ll s, ll req){
    if(s>=req)return 0;
    if(i==v.size())return 1e15;
    if(dp[i][s]!=-1)return dp[i][s];
    ll ans=find(i+1,v,s,req);
    ans=min(ans,find(i+1,v,s+v[i].first,req)+v[i].second);
    return dp[i][s]=ans;
}
void solve(){
    ll n;
    cin>>n;
    ll cnt=0;
    vector<pair<ll,ll>>v;
    ll tot=0;
    for(ll i=0;i<n;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        ll req=max(0LL,(y-x+1)/2);
        v.push_back({z,req});
        tot+=z;
    }
    memset(dp,-1,sizeof dp);
    cout<<find(0,v,0,(tot+1)/2)<<'\n';
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
    // cin>>t;
    t=1;
    while(t--)
        solve();
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
