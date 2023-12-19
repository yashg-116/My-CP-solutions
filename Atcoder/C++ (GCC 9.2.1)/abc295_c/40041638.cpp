#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll int
ll pow_(ll x, ll y){
	if (y == 0)return 1;
	ll res = 1;
	while(y){if(y & 1){ res=(res*x); }x=(x*x); y=y/2;}
	return res;
}
void dfs(int i,int j1, vector<vector<char>>&a, int j2, vector<vector<ll>>&vis, int n, int m,int k1,int k2){
    if((i!=k1 || j1!=k2) && (a[i][j1]=='#' || a[i][j1]=='.'))
    { a[i][j1]='.';}
    vis[i][j1]=1;
    int x[8]={0,0,1,1,1,-1,-1,-1};
    int y[8]={1,-1,1,0,-1,0,1,-1};
    for(int j=0;j<8;j++){
        int p1=i+x[j];
        int p2=j1+y[j];
        if(p1>=0 && p1<n && p2>=0 && p2<m && (abs(p1-k1)+abs(p2-k2))<=j2 && vis[p1][p2]==0){
            dfs(p1,p2,a,j2,vis,n,m,k1,k2);
        }
    }
}
void solve(){
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        m[x]++;
    }
    ll cnt=0;
    for(auto&i:m){
        cnt+=i.second/2;
    }
    cout<<cnt<<'\n';
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