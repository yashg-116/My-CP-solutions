#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>
void solve(){
    map<string,int>mp;
    string a[10]={"tourist","ksun48","Benq","Um_nik","apiad","Stonefeang","ecnerwala","mnbvmar","newbiedmy","semiexp" };
    int b[10]={3858,3679,3658,3648,3638,3630,3613,3555,3516,3481};
    for(int i=0;i<10;i++){
        mp[a[i]]=b[i];
    }
    string st;
    cin>>st;
    cout<<mp[st];
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
