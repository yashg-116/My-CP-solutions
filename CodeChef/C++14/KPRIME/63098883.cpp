#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    vector<int>dp(100001,0);
    for(int i = 2; i<=100000; i++){
        if(dp[i]==0){
            for(int k = 1; k*i<=100000; k++){
                dp[i*k]++;
            }
        }
    }
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        int ans = 0;
        for(int i = a; i<=b; i++){
            if(dp[i]==k){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}