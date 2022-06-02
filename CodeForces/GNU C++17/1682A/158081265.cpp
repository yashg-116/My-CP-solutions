#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll a=0,p;
    char c;
    p=n/2-1;
    c=s[n/2];
    while(p>=0){
        if(s[p]==c){
            a++;
        }
        else break;
        p--;
    }
    p=n/2;
    while(p<n){
        if(s[p]==c){
            a++;
        }
        else break;
        p++;
    }
    cout<<a<<endl;
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