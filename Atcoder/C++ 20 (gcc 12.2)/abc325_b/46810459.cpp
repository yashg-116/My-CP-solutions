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
void solve(){
    ll n;
    cin>>n;
    vector<pair<int,int>>v2;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v2.push_back({y,x});
    }
    ll maxi=0;
    for(ll i=0;i<n;i++){
        ll p=v2[i].second;
        for(ll j=0;j<n;j++){
            if(i==j)continue;
            else{
                if((v2[j].first-v2[i].first+24)%24<=8)p+=v2[j].second;
            }
        }
        maxi=max(maxi,p);
    }
    cout<<maxi<<'\n';
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
