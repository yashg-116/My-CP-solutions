#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>


void solve() {
    ll x,y;
    cin>>x>>y;
    if(y>x &&  y-x<=2){
        cout<<"Yes\n";
        return;
    }
    if(y<x &&  x-y<=3){
        cout<<"Yes\n";
        return;
    }
    cout<<"No\n";
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


