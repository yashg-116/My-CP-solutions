#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>


void solve() {
    ll n;
    cin>>n;
    ll cnt=0,it=0,i=0;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        y+=x;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    multiset<ll>s;
    for(ll i=0;;i++){
        if(s.empty()){
            i=v[it].first;
            if(it==n)
            break;
        }
        while(it<n && v[it].first==i)s.insert(v[it++].second);
        while(!s.empty() && (*s.begin())<i)s.erase(s.begin());
        if(!s.empty()){
            cnt++;
            s.erase(s.begin());
        }
    }
    cout<<cnt<<'\n';
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


