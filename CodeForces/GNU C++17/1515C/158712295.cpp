#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve()
{
    ll n, m, x;
    cin >> n >> m >> x;
    vector<ll> a(n);
    multiset<pair<int,int>> mt;
    pair<int,int>p;
    for(ll i=0;i<m;i++){
        mt.insert({0,i+1});
    }
    cout<<"Yes\n";
    for (ll i = 0; i < n; i++)
        {cin >> a[i]; 
        p=*mt.begin();
        mt.erase(p);
        mt.insert({a[i]+p.first,p.second});
        cout<<p.second<<' ';
        }
    cout<<'\n';
}
int main()
{

    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}