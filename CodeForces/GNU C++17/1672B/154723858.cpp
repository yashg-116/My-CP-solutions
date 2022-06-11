#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0, b=0, flag=0, a1=0,b1=0;
        for(int i=0;i<s.length(); i++){
            if(s[i]=='A') {
                a++;
                a1=1;
                b1=0;
                }
            else {
                b++;
                b1=1;
                a1=0;
            }
            if(a<b){
                flag=1; break;
            }
        }
        if(b1!=1) flag=1;
        if(a>0 && b==0) flag=1;
        if(flag==1) cout<<"NO\n";
        else cout<<"YES\n";

    }
}