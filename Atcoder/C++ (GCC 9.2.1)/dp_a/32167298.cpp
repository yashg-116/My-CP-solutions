// https://atcoder.jp/contests/dp/tasks/dp_a

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
vector<int>v;
vector<int>dp(100005,-1);
int n;
int solve(int n){
    if(n==0) return 0;
    if(n==1) return abs(v[1]-v[0]);
    if(dp[n]!=-1) return dp[n];
    return dp[n]=min(solve(n-1)+abs(v[n]-v[n-1]),solve(n-2)+abs(v[n]-v[n-2]));
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
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<solve(n-1)<<endl;
    return 0;
}