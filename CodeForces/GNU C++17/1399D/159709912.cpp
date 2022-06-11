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
    string s;
    cin>>s;
    map<int,string>m;
    vector<string>v;
    int cnt=0;
    for(int i=0;i<n;i++){
        int p=s[i]-'0';
        int q=p==1?0:1;
        // cout<<p<<" "<<q<<endl;
        if(m.find(p)==m.end() || m[p]==""){
            ++cnt;
            v.push_back(to_string(cnt));
            m[q]+=to_string(cnt);
            m[q]+="y";
        }
        else{
            int r=0;
            while(m[p][r]!='y'){
                ++r;
            }
            v.push_back(m[p].substr(0,r));
            m[q]+=(m[p].substr(0,r));
            m[q]+="y";
            m[p].erase(0,r+1);

        }
    }
    cout<<cnt<<'\n';
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<'\n';
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
    while(t--)
        solve();
    return 0;
}