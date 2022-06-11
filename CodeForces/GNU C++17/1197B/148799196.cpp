// Pillars
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,t,cnt=-1;;
    cin>>n;
    cin>>a;
    t=a;n--;
    while(n--){
        cin>>a;
        if(a<t)cnt=1;
        if(cnt==1){
            if(a>t){cnt=0;break;}
        }
        t=a;
    }
    if(cnt==0)cout<<"NO\n";
    else cout<<"YES\n";
}