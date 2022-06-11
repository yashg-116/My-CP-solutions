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
		int flag=1; 
		for (int i = 0; i < n; ++i) {
			int f = i * 2, b = 4 * n - (i * 2) - 1;
			if (a[f] != a[f + 1] || a[b] != a[b - 1] || a[f] * a[b] != area) {
				flag = 0;
			}
		}
		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;
    }
}
