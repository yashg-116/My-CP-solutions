#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
    int arr[n+1], presum[n+1] = {0};
    for (int i=1; i<=n; i++) {
        cin >> arr[i];
        presum[i] = presum[i-1] + arr[i];
    }
    int m; cin>>m;
    while (m--) {
        int x; cin >> x;
        int l=0,r=n;
        while(l!=r){
            int mid=(l+r)/2;
            if(presum[mid]<x)
                l=mid+1;
            else
                r=mid;
        }
        cout<<l<<endl;
        // for (int i=1; i<=n; i++) {
        //     if (x<=presum[i]) {
        //         cout<<i<<endl;
        //         break;
        //     }
        // }
    }
    return 0;
}