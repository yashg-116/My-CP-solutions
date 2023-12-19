#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>

class SGTree{
    vector<ll>seg;
public:
    SGTree(ll n){
        seg.resize(4*n+1);
    }
    void build(ll ind, ll low, ll high, ll arr[]){
        if(low==high){
            seg[ind]=arr[low];
            return;
        }
        ll mid=(low+high)/2;
        build(2*ind+1,low,mid,arr);
        build(2*ind+2,mid+1,high,arr);
        seg[ind]=min(seg[2*ind+1], seg[2*ind+2]);
    }
    ll query(ll ind, ll low, ll high, ll l, ll r){
        if(r<low || high<l)return INT_MAX;
        if(low>=l && high<=r)return seg[ind];
        ll mid=(low+high)>>1;
        ll left=query(2*ind+1, low, mid, l, r);
        ll right=query(2*ind+2,mid+1,high,l,r);
        return min(left,right);
    }
    void update(ll ind, ll low, ll high, ll i, ll val){
        if(low==high){
            seg[ind]=val;
            return;
        }
        ll mid=(low+high)>>1;
        if(i<=mid) update(2*ind+1,low,mid,i,val);
        else update(2*ind+2,mid+1,high,i,val);
        seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
    }
};

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
ll n,ans=0;
map<pair<pair<ll,ll>,ll>,ll>mp;
void dfs(ll i, ll j, vector<vector<ll>>&a, ll curr){
    curr^=a[i][j];
    if(i+j==n+1){
        mp[{{i,j},curr}]++;
        return;
    }
    dfs(i+1,j,a,curr);
    dfs(i,j+1,a,curr);
}
void dfs2(ll i, ll j, vector<vector<ll>>&a, ll curr){
    if(i+j==n+1){
        ans+=mp[{{i,j},curr}];
        return;
    }
    curr^=a[i][j];
    dfs2(i-1,j,a,curr);
    dfs2(i,j-1,a,curr);
}
void solve(){
    cin>>n;
    vector<vector<ll>>a(n+1,vector<ll>(n+1));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++)cin>>a[i][j];
    }
    dfs(1,1,a,0);
    dfs2(n,n,a,0);
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
    // cin>>t;
    t=1;
    while(t--)
        solve();
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
