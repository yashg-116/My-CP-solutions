#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
long long n,a[5005], ans=INT64_MAX;
#define ll long long
void solve(){
    cin >> n;
    for (ll i=1; i<=n; i++) {
        cin >> a[i];
    }
    for (ll i=1; i<=n; i++) {
        long long prev=0, sum=0;
        for (ll j=i-1; j>=1; j--) {
            prev+=a[j]-prev%a[j];
            sum+=prev/a[j];
        }
        prev=0;
        for (ll j=i+1; j<=n; j++) {
            prev+=a[j]-prev%a[j];
            sum+=prev/a[j];
        }
        ans=min(ans, sum);
    }
    cout << ans << "\n";
}

int main() {

    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
        solve();
    return 0;
}