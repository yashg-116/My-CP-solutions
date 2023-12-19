// https://atcoder.jp/contests/dp/tasks/dp_c
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
vector<vector<int>>v(100005,vector<int>(3));
vector<vector<int>>dp(100005,vector<int>(3));
vector<vector<ll>>k(100005,vector<ll>(3,0));
int n;
ll solve(int i, int j){
    if(dp[i][j]!=0) return dp[i][j];
    if(i==n) return 0;
    return dp[i][j]=v[i][j]+max(solve(i+1,(j+1)%3),solve(i+1,(j+2)%3));
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++)
            cin>>v[i][j];
    }
    ll maxi=0;
    // Using topdown approach
    // for(int i=0;i<3;i++) 
    // maxi=max(maxi,solve(0,i));

    // Using bottomup approach
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            k[i+1][j]=v[i][j]+max(k[i][(j+1)%3],k[i][(j+2)%3]);
        }
    }
    for(int j=0;j<3;j++) maxi=max(maxi,k[n][j]);

    cout<<maxi<<endl;
    return 0;
}
