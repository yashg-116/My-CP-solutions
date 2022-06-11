#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    string s,c;
    cin>>t;
    while(t--){
        cin>>s;
        cin>>c;
    
    int i=0,n=0;
    vector<int>v;
    while(s[i]){
        string st="";
        st+=s[i];
        if(st==c)
        v.push_back(i);
        i++;
        n++;
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            cout<<"YES\n";
            cnt=1;
            break;
        }
        
    }
    if(cnt==0)cout<<"NO\n";
    }
}