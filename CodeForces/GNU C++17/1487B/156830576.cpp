#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){

    int n,k;
    cin>>n>>k;
    k--;
    cout<<(k+(n%2)*(k/(n/2)))%n+1<<'\n';
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
    while(t--){
        solve();
    }
    return 0;
}