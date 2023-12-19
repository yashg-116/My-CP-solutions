#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>

void solve(){
    ll n;
    cin>>n;
    ll a[n],maxi=-1,in=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>maxi){
            maxi=a[i];
            in=i;
        }
    }
    cout<<in+1<<'\n';
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
