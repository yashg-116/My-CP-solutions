#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve(){
    int n,n2=0;
    cin>>n;
    string s,s2="";
    cin>>s;
    for(int i=0;i<n-1;i+=2){
        char a=s[i];
        char b=s[i+1];
        if(a==b) { i--;}
        else {s2+=a;s2+=b; n2+=2;}
    }
    cout<<n-n2<<'\n';
    cout<<s2<<'\n';
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