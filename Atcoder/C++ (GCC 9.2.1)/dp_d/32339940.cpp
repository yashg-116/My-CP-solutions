#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
   ll t,w;
vector<vector<ll>>v(100,vector<ll>(100005));
vector<vector<ll>>dp(100,vector<ll>(100005,0));
ll solve(ll i, ll w2){
    if(i==-1) return 0;
    if(dp[i][w2]!=0) return dp[i][w2];
    ll take=-1e18;
    if(w2+v[i][0]<=w)
    take=v[i][1]+solve(i-1,w2+v[i][0]);
    ll notake=solve(i-1,w2);
    return dp[i][w2]=max(take,notake);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    cin>>t>>w;
    for(ll i=0;i<t;i++){
        ll x,y;
        cin>>x>>y;
        v[i][0]=x;
        v[i][1]=y;
    }
    cout<<solve(t-1,0)<<endl;
    return 0;
}