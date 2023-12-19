// https://atcoder.jp/contests/dp/tasks/dp_a

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
int n, m;
vector<vector<int>> v;
vector<int> dp(1e5+10,-1);
int solve(int i){
    if(dp[i]!=-1) return dp[i];
    int maxi=0;
    for(auto j:v[i]){
        maxi=max(1+solve(j),maxi);
    }
    return dp[i]=maxi;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cin>>n>>m;
    v.clear();
    v.resize(n+1);
    while(m--){
        int x, y;
        cin>>x>>y;
        v[x].push_back(y);
    }
    int gmaxi=0;
    for(int i=1;i<=n;i++){
        gmaxi=max(gmaxi,solve(i));
    }
    cout<<gmaxi<<'\n';
}