#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
void set_(int i,int j, char c,vector<string>&s,vector<set<char>>&row,vector<set<char>>&col){
    if(c!='.'){
        row[i].insert(c);
        col[j].insert(c);
    }
    s[i][j]=c;
}
void unset(int i,int j,vector<string>&s, vector<set<char>>&row,vector<set<char>>&col){
    if(s[i][j]!='.'){
        row[i].erase(s[i][j]);
        col[j].erase(s[i][j]);
    }
    s[i][j]='.';
}
bool f2=0;
void find(int i, int j, vector<string>&s, vector<set<char>>&row,vector<set<char>>&col, string& r, string& c){
    int n=r.size();
    if(i==n){
        int f=1;
        for(int i1=0;i1<n;i1++){
            if(row[i1].size()==3 && col[i1].size()==3)continue;
            else f=0;
        }
        if(f==1){
            cout<<"Yes\n";
            for(int i1=0;i1<n;i1++){
                for(int j1=0;j1<n;j1++){
                    cout<<s[i1][j1];
                }
                cout<<'\n';
            }
            exit(0);
        }
        return;
    }
    int ni=(j==n-1?i+1:i);
    int nj=(j+1)%n;
    for(auto it:"ABC"){
        if(!it)continue;
        if(row[i].count(it))continue;
        if(col[j].count(it))continue;
        if(row[i].size()==0 && it!=r[i])continue;
        if(col[j].size()==0 && it!=c[j])continue;
        set_(i,j,it,s,row,col);
        find(ni,nj,s,row,col,r,c);
        unset(i,j,s,row,col);
    }
    set_(i,j,'.',s,row,col);
    find(ni,nj,s,row,col,r,c);
    unset(i,j,s,row,col);
}
void solve() {
    ll n;
    string r,c;
    cin>>n;
    vector<string>s(n),v2;
    vector<set<char>>row(n),col(n);
    cin>>r>>c;
    for(int i=0;i<n;i++){
        s[i].resize(n,'.');
    }
    find(0,0,s,row,col,r,c);
    cout<<"No\n";
    // else{
        
    // }
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
    // cin >> t;
    t=1;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}


