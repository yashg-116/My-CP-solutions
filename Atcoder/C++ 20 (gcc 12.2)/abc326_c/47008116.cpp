#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>


void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    deque<ll>q;
    int res=0;
    for(int i=0;i<n;i++){
        int p=v[i];
        while(!q.empty() && p-q.front()>=m)q.pop_front();
        q.push_back(p);
        res=max(res,(int)q.size());
    }
    cout<<res<<'\n';
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
    // cin >> t;
    t=1;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}


