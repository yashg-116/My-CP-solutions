#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>
void solve(){
    ll n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=9;i++){
        if(n%i==0)v.push_back(i);
    }
    // vector<int>v2(n+1);
    cout<<1;
    for(int i=1;i<=n;i++){
        int f=0;
        for(int j=0;j<v.size();j++){
            int p=n/v[j];
            if(i%p==0){
                cout<<v[j];f=1;
                break;
            }
        }
        if(f==0){
            cout<<'-';
        }
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
    // cin>>t;
    t=1;
    // while(t--)
        solve();
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
