#include <bits/stdc++.h>

using namespace std;
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
	ll n, k;
	cin >> n >> k;
	cout << k + (k - 1) / (n - 1) << endl;
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
	cin >> t;
	while (t--) {
        solve();
	}
}