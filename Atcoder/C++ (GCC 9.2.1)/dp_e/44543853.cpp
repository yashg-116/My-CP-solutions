#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>
vector<vector<ll>>dp(101,vector<ll>(100001,0));
ll find(ll i, ll n, vector<pair<ll,ll>>&v, ll val){
    if(val==0)return 0;
    if(i==v.size())return 1e18;
    if(dp[i][val]!=0)return dp[i][val];
    ll take=1e18;
    ll notake=find(i+1,n,v,val);
    if((val-v[i].second)>=0){
        take=v[i].first+find(i+1,n,v,val-v[i].second);
    }
    return dp[i][val]=min(take,notake);
}

void solve(){
    ll n,w;
    cin>>n>>w;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    for(ll i=1e5;i>=0;i--){
        if(find(0,n,v,i)<=w){
            cout<<i<<'\n';
            return;
        }
    }
    cout<<1<<' ';
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
