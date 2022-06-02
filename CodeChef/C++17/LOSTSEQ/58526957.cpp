#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int p,s=0;
        for(int i=0;i<2*n;i++){
            cin>>p;
            s+=p;
        }
        if(s%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}