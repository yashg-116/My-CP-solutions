// https://atcoder.jp/contests/dp/tasks/dp_a

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
vector<int>v;
vector<int>dp(100005,-1);
int n,k;
int solve(int n){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int res=INT_MAX;
    for(int i=n-1;i>=n-k;i--){
        if(i>=0)
            res=min(res,solve(i)+abs(v[n]-v[i]));
    }
    return dp[n]=  res;
}

int main() {

     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);

     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<solve(n-1)<<endl;
    return 0;
}