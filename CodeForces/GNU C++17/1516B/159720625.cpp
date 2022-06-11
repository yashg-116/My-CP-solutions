#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
ll pow_(ll x, ll y){
	if (y == 0)return 1;
	ll res = 1;
	while(y){if(y & 1){ res=(res*x); }x=(x*x); y=y/2;}
	return res;
}
vector<ll>pre(2002,0);
void solve()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        pre[i]=(pre[i-1]^a);
    }
    bool y=!pre[n];
    for (int i=1;i<=n;i++)
    {
        for (int j=i+1;j<n;j++)
        y|=(pre[i]==(pre[j]^pre[i]) && pre[i]==(pre[n]^pre[j]));
    }
    if(y) cout<<"YES\n";
    else cout<<"NO\n";
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
    cin>>t;
    while(t--)
        solve();
    return 0;
}