#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
ll t,w;
vector<vector<ll>>v(101,vector<ll>(2));
vector<vector<ll>>dp(101,vector<ll>(100005,0));
ll solve(ll i, ll v2){
    if(v2==0) return 0;
    if(i==-1) return 1e18;
    if(dp[i][v2]!=0) return dp[i][v2];
    ll notake=solve(i-1,v2);
    ll take=1e18;
    if(v2-v[i][1]>=0)
    take=solve(i-1,v2-v[i][1])+v[i][0];
    return dp[i][v2]=min(notake,take);
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
    ll m=1e5;
    for(ll y=m;y>=0;y--){
        if(solve(t-1,y)<=w)
        {
            cout<<y<<endl;
            break;
        }
    }
    return 0;
}