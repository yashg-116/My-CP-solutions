#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        ll p=0;
        for(int i=0;i<n;i++){
            p+=s[i]-'a'+1;
        }
        if(n%2 == 0) cout<<"Alice"<<" "<<p<<'\n';
        else if(n==1) cout<<"Bob"<<" "<<s[0]-'a'+1<<'\n';
        else{
            int m=min(s[0]-'a',s[n-1]-'a');
            cout<<"Alice"<<" "<<p-2*m-2<<'\n';
        }
    }
}