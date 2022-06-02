#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve(){
    int k;
    cin>>k;
    int a[k];
    vector<int> c;
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    if(k==1){
		cout<<"YES"<<endl; return;
	}
	for(int i=k-1;i>=1;i-=2){
		if(a[i]<a[i-1]) {
			swap(a[i],a[i-1]);
		}
	}
	for(int i=0;i<k-2;i++){
		if(a[i]>a[i+1]){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
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