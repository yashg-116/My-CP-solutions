#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>


void solve() {
    ll n;
    cin>>n;
    for(ll i=n;i<1000;i++){
        int n2=i;
        int p=n2%10;
        n2/=10;
        int p2=n2%10;
        n2/=10;
        int p3=n2;
        if(p2*p3==p){
            cout<<i<<'\n';
            return;
        }
    }
    
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


