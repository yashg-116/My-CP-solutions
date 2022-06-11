// Equal Rectangles
#include <bits/stdc++.h>
using namespace std;
int main(){
    int q,n;
    cin>>q;
    while(q--){
        cin>>n;
        int a[4*n];
        for (int j = 0; j < 4 * n; ++j) {
			cin >> a[j];
		}
		sort(a,a+4*n);
		int area = a[0] * a[4*n-1];
		bool ok = true;
		for (int i = 0; i < n; ++i) {
			int lf = i * 2, rg = 4 * n - (i * 2) - 1;
			if (a[lf] != a[lf + 1] || a[rg] != a[rg - 1] || a[lf] * a[rg] != area) {
				ok = false;
			}
		}
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;
    }
}
