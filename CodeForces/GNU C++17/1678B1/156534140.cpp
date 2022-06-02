#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int o=0,z=0,sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            if(z&1) {sum++; z=0;}
            else o++;
        }
        else{
            if(o&1) {sum++; o=0;}
            else z++;
        }
    }
    cout<<sum<<'\n';
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