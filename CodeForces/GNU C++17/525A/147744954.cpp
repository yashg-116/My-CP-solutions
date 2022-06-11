//Vitaliy and Pie
#include <bits/stdc++.h>
using namespace std;
int  main(){
    int t,cnt=0;
    string s;
    int a[26]={0};
    cin>>t;
    cin>>s;
    for(int i=0;i<2*t-2;i+=2){
        if(s[i]!=s[i+1]+32){
            a[s[i]-97]++;
            if(a[s[i+1]-65]==0)
                cnt++;
            else
                a[s[i+1]-65]--;
        }
           
    }
    cout<<cnt;
}