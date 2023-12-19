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
int dp[101][10001],track[101][10001];
int find(ll i, vector<vector<ll>>&a, ll s, ll sum){
    if(i==a.size())return s==sum;
    if(sum>s)return 0;
    if(dp[i][sum]!=-1)return dp[i][sum];
    int t1=find(i+1,a,s,sum+a[i][0]);
    int t2=find(i+1,a,s,sum+a[i][1]);
    if(t1)track[i][sum]=1;
    else if(t2)track[i][sum]=2;
    return dp[i][sum]=t1|t2;
}
void trac(ll i, vector<vector<ll>>&a, ll s, ll sum){
    if(i==a.size()||sum>s)return;
    if(track[i][sum]==1){
        cout<<"H";
        trac(i+1,a,s,sum+a[i][0]);
    }
    else if(track[i][sum]==2){
        cout<<"T";
        trac(i+1,a,s,sum+a[i][1]);
    }
}
void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    ll mini=1e9,maxi=-1,s=0;
    for(ll i=0;i<n-1;i++){
        cin>>a[i];
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    vector<ll>b(n);
    b=a;
    b[n-1]=0;
    sort(b.begin(),b.end());
    for(ll i=1;i<n-1;i++){
        s+=b[i];
        // cout<<s<<' ';
    }
    if(s>=x){
        cout<<0<<'\n';
        return;
    }
    a[n-1]=1e9;
    sort(a.begin(),a.end());
    s=0;
    for(ll i=1;i<n-1;i++){
        if(s+a[i]>=x){
            cout<<(x-s)<<'\n';
            return;
        }
        s+=a[i];
        // cout<<s<<' '<<a[0];
    }
    cout<<-1<<'\n';
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
