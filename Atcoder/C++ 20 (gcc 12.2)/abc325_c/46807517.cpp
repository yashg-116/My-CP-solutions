#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>
// int dp[200001];
// int find(int i, vector<ll>&v, ll n){
//     if(i==n){
//         return 0;
//     }
//     if(i>n)return 1e9;
//     if(dp[i]!=-1)return dp[i];
//     return dp[i]=min(1+find(i+1,v,n),find(v[i]+i+1,v,n));


// }
void dfs(int i, int j, int n, int m, vector<vector<int>>&vis,vector<string>&v){
    vis[i][j]=1;
    v[i][j]='.';
    int a[8]={0,0,1,1,1,-1,-1,-1};
    int b[8]={1,-1,0,1,-1,0,1,-1};
    for(ll k=0;k<8;k++){
        int nr=i+a[k],nc=j+b[k];
        if(nr>=0 &&nc>=0 && nr<n && nc<m && v[nr][nc]=='#' && vis[nr][nc]==0){
            dfs(nr,nc,n,m,vis,v);
        }
    }
}
void solve(){
    ll n,m,cnt=0;
    cin>>n>>m;
    vector<string>v(n);
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(v[i][j]=='#'){
                dfs(i,j,n,m,vis,v);
                cnt++;
            }
        }
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
    // cin>>t;
    t=1;
    //pre();
    while(t--)
        solve();
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
