#include <bits/stdc++.h>
using namespace std;
 
vector<int> vis(1e5+10, -1);
 
int solve(vector<vector<int> > &g , int v){
    if(vis[v] != -1){
        return vis[v];
    }
    int ans = 0;
    for(auto j: g[v]){
        ans = max(ans, 1 + solve(g, j));
    }
    return vis[v] = ans;
}
 
int main(){
    int n, m; 
    cin>>n>>m;
    vector<vector<int> > g(n+1);
    while(m--){
        int a, b; cin>>a>>b;
        g[a].push_back(b);
    }
    int ans = 0;
    for(int i = 1; i<=n; i++){
        ans = max(ans, solve(g, i));
    }
    cout<<ans<<"\n";
}