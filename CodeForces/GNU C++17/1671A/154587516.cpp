#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0, b=0, flag=1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a') 
            {
                if(b==1){
                    flag=0; break;
                }
                b=0;
                a++;
            }
            else {
                if(a==1){
                    flag=0; break;
                }
                a=0;
                b++; 
            }
        }
        if(b==1)
            flag=0;
        if(a==1)
            flag=0;
        if(flag==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}