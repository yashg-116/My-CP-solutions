#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define int long long
#define vll vector<ll>
ll pow_(ll x, ll y){
    if (y == 0)return 1;
    ll res = 1;
    while(y){if(y & 1){ res=(res*x); }x=(x*x); y=y/2;}
    return res;
}
ll _find(ll n,vll &par){
    if(par[n]==-1) return n;
    return par[n]=_find(par[n],par);
}
void _union(ll a,ll b,vll &par){
    ll ppa=_find(a,par);
    ll ppb=_find(b,par);
    if(ppa!=ppb){
        if(ppa>ppb) par[ppb]=ppa;
        else par[ppa]=ppb;
    }
}

void dfs(ll i, vector<ll>&v, vector<vector<ll>>&v2, vector<ll>&vis, vector<ll>&p2){
    if(!vis[i]){
        int p3=lower_bound(p2.begin(),p2.end(),v[i-1])-p2.begin();
        int r=0,t;
        if(p3==p2.size()){
            r=1;
            p2.push_back(v[i-1]);
        }
        else {
            t=p2[p3];
            p2[p3]=v[i-1];
        }
        vis[i]=p2.size();
        for(auto&j:v2[i]){
            if(!vis[j]){
                dfs(j,v,v2,vis,p2);
            }
        }
        if(r)p2.pop_back();
        else p2[p3]=t;
    }
}
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    vector<vector<ll>>v2(n+1);
    for(ll i=0;i<n-1;i++){
        ll x,y;
        cin>>x>>y;
        v2[x].push_back(y);
        v2[y].push_back(x);
    }
    vector<ll>vis(n+1,0),p2;
    p2.push_back(v[0]);
    dfs(1,v,v2,vis,p2);
    // queue<pair<ll,vector<ll>>>q;
    // q.push({1,{v[0]}});
    // while(!q.empty()){
    //     int n2=q.size();
    //         auto p=q.front();
    //         q.pop();
    //         if(!vis[p.first]){
    //             vis[p.first]=p.second.size();
    //             for(auto&j:v2[p.first]){
    //                 if(!vis[j]){
    //                     vector<ll> p2=p.second;
    //                     auto p3=lower_bound(p2.begin(),p2.end(),v[j-1]);
    //                     if(p3==p2.end())p2.push_back(v[j-1]);
    //                     else *p3=v[j-1];
    //                     q.push({j,p2});
    //                 }
    //             }
    //         }
    // }
    for(int i=1;i<=n;i++)cout<<vis[i]<<'\n';
}

int32_t main() {

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
    return 0;
}

