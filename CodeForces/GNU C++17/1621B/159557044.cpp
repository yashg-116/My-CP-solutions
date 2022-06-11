#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll mini=-1;
    ll maxi=1e9+1;
    int minL = maxi, costL =maxi;
    int maxR = 0, costR = maxi;
    int maxLen = 0, costLen = maxi;
    for (int i = 0; i < n; i++)
    {
        int l, r, c;
        cin >> l >> r >> c;
 
        if (l < minL)
            minL = l, costL = maxi;
        if (l == minL)
            costL = min(costL, c);
 
        if (maxR < r)
            maxR = r, costR = maxi;
        if (maxR == r)
            costR = min(costR, c);
 
        if (maxLen < r - l + 1)
            maxLen = r - l + 1, costLen = maxi;
        if (maxLen == r - l + 1)
            costLen = min(costLen, c);
 
        int ans = costL + costR;
        if (maxLen == maxR - minL + 1)
            ans = min(ans, costLen);
        cout << ans << "\n";
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
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}