#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int>a;
    int f=1;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        if(v>0) a.push_back(v);
        if(v==0) f=0;
    }
    int k=a.size();
    int s=0;
    if(k==0) cout<<0<<'\n';
    else if(f==0) cout<<k<<'\n'; 
    else {sort(a.begin(),a.end());
    int f2=0;
    for(int i=1;i<k;i++){
            if(a[i]==a[i-1]){
                f2=1;
            }
        }
    if(f2==1) cout<<k<<'\n';
    else cout<<k+1<<'\n';
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