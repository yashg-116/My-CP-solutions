#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
vector<ll>v;
ll dp[40001][500];
ll n2;
ll mod=1000000007;
ll pow_(ll x, ll y){
	if (y == 0)return 1;
	ll res = 1;
	while(y){if(y & 1){ res=(res*x); }x=(x*x); y=y/2;}
	return res;
}
bool palin(int n){
    string st=to_string(n);
    int l=0,r=st.size()-1;
    while(l<r){
        if(st[l]!=st[r]) return false;
        l++;
        r--;
    }
    return true;
}
ll solve(int n2,int n1){
    if(n1==0) return 0;
   if(n2==0) return 1;
   if(dp[n2][n1]!=-1) return dp[n2][n1];
   ll s=0;
       if((n2-v[n1-1])>=0){
           s=(solve(n2-v[n1-1],n1))%mod;
       }
    s=(s%mod+(solve(n2,n1-1))%mod)%mod;
   return dp[n2][n1]=s;
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    for(int i=1;i<=40001;i++){
        if(palin(i)){
            v.push_back(i);
        }
}
    memset(dp,-1,sizeof(dp));
    ll t;
    cin>>t;
    while(t--){
        cin>>n2;
        cout<<solve(n2,v.size())<<'\n';
    }
    return 0;
}