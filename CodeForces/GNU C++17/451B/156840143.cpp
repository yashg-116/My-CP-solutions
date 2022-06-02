#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=-1,r=-1;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            if(l==-1) l=i;
        }
        else {
            if(l!=-1 && r==-1){
                r=i; break;
            }
        }
    }
    if(l!=-1 && r==-1) r=n-1;
    if(r==-1) cout<<"yes"<<'\n'<<1<<" "<<1<<'\n';
    else {
        reverse(a+l,a+r+1);
        if(is_sorted(a,a+n)) cout<<"yes"<<'\n'<<l+1<<" "<<r+1<<'\n';
        else cout<<"no"<<'\n';
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
        solve();
    return 0;
}