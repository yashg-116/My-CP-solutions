#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n;
	cin >> n;
	vector<int>arr(n, 0);
	vector<int>cnt(n + 1, 0);
	for (int i = 0; i < n; i++) {cin >> arr[i]; cnt[arr[i]]++;}
	vector<int>b;
	set<int>st;
	int m = 0;
	for (int x : arr)
	{ 
		st.insert(x);
		cnt[x]--;
		while (st.count(m))m++;
		if (!cnt[m])
		{
			b.push_back(m);
 			st.clear();
			m = 0;
		}
 
	}
	cout << b.size() << endl;
	for (int x : b)cout << x << " ";
	cout << "\n";
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