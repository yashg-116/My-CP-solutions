#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    ll dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0)dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1]+1;
            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string s="";
    while(n && m){
        if(s1[n-1]==s2[m-1]){
            s+=s1[n-1];
            n--;
            m--;
        }
        else if(dp[n-1][m]>dp[n][m-1]) n--;
        else m--;
    }
    reverse(s.begin(),s.end());
    cout<<s;
    
    return 0;
}