#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
ll pow_(ll x, ll y){
	if (y == 0)return 1;
	ll res = 1;
	while(y){if(y & 1){ res=(res*x); }x=(x*x); y=y/2;}
	return res;
}
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    vector<int>v(n+2,-1);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]!=(i+1))v[i+1]=1;
        else v[i+1]=0;
    }
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(v[i]==1 && v[i+1]==1){
            cout<<i<<" ";
        }
        else if(v[i]==1 && v[i+1]==-1){
            cout<<i<<" ";
        }
        else if(v[i]==1 && v[i+1]==0){
            if(i==n-1){
                cout<<n<<" "<<n-1; break;
            }
            else cout<<i<<" ";
        }
        else if(v[i]==0 && v[i+1]==1){
            if(v[i+2]==0 && i==n-2){
                cout<<i+1<<" "<<i+2<<" "<<i; break;
            }
            cout<<i+1<<" "<<i<<" ";
            i++;
        }
        else if(v[i]==0 && v[i+1]==0){
            if(i==n-2 && v[i+2]==0){
                int p=i;
                cout<<i+1<<" "<<i+2<<" "<<i<<" ";
                i+=2;
            }
            else{
                cout<<i+1<<" "<<i<<" ";
                i++;
            }
        }
    }
    cout<<endl;
}

int main() {

    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}