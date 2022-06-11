#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int t=-1,r=0,b=0;;
        for(int i=0;i<n;i++){
            if(a[i]=='R') r++;
            if(a[i]=='B') b++;
            if(a[i]=='R' || a[i]=='B'){
                if(t==-1){
                    if(i!=(n-1) && (a[i+1]!='R' && a[i+1]!='B'))
                    {t=-2; break;}
                }
                t+=1;
            }
            else {
                if(max(r,b)>0 && min(r,b)==0){
                    t=-2; break;
                }
                r=0;b=0;
                t=-1;
            }
        }
        if(max(r,b)>0 && min(r,b)==0)
                    t=-2;
        if(t==-2 || t==0) cout<< "NO\n";
        else cout<<"YES\n";
    }
}