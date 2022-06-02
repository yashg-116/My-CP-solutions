#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
 int t,x,y,sum=0;
 float n;

 cin>>t;
 while(t--){
    cin>>n>>x>>y;
    sum=0;
    int a1;
    while(n>0){
    if(n>=100)
        a1=25*y;
    else
        a1=ceil(float(n/4))*y;
    sum+=min(x,a1);
    n-=100;
    }
    cout<<sum<<endl;
 }   
}