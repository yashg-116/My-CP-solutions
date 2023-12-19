#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>

void solve(){
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    ll p=998244353;
    cout<<(((((((a%p)*(b%p))%p)*(c%p))%p)-(((((d%p)*(e%p))%p)*(f%p))%p)+p)%p);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // int t;
    // cin>>t;
    // while(t--)
        solve();
    return 0;
}
