#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,a,b,c;
        cin>>n>>k;
        int p=n/3;
        if(p*3==n){
            a=p,b=p,c=p;
        }
        else{
            p=n/2;
            for(int i=p;i>=1;i--){
                a=i,b=n-2*a,c=n-a;
                if(2*a+b==n && b!=0){c=a;break;}
                else if(a+2*(c/2)==n && c!=0){b=c/2;c=b;break;}
            }
        }
        cout<<a<<" "<<b<<" "<<c<<'\n';
    }
}