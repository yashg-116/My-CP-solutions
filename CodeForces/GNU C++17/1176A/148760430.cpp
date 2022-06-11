// Divide it!
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,n,cnt;
    cin>>t;
    while(t--){
        cin>>n;
        cnt=0;
        if(n==1)cout<<0<<"\n";
        else
        {while(n!=1){
            if(n%5==0){n=(4*n)/5;cnt++;}
            else if(n%3==0){n=(2*n)/3;cnt++;}
            else if(n%2==0){n/=2;cnt++;}
            else break;
        }
        if(n!=1)
        cout<<-1<<"\n";
        else
        cout<<cnt<<"\n";
        }
    }
}