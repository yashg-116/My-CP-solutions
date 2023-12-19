#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>

ll maxi2=0;
ll dfs(int i,vector<vector<pair<ll,ll>>>&adj, vector<ll>vis, ll s){
    maxi2=max(maxi2,s);
    if(!vis[i]){
        vis[i]=1;
        for(auto&j:adj[i]){
            if(!vis[j.first]){
                dfs(j.first,adj,vis,s+j.second);
            }
        }
    }
    return s;
}
void solve(){
    ll n,m;;
    cin>>n>>m;
    vector<vector<pair<ll,ll>>>adj(n+1);
    for(ll i=0;i<m;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
    }
    ll maxi=0;
    for(ll i=1;i<=n;i++){
        vector<ll>vis(n+1,0);
        dfs(i,adj,vis,0);
        maxi=max(maxi,maxi2);
        maxi2=0;
    }
    cout<<maxi<<"\n";
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
