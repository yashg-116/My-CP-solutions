#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int cnt;
    cin>>t;
    while (t--)
    {
        int x;
        string s;
        cin >> x;
        cin>>s;
        int z=0;
        for(int i=0;i<x;i++){
            if(s[i]=='0') z++;
        }
        if(z%2==0) cout<<"BOB\n";
        else{
            if(z==1) cout<<"BOB\n";
            else cout<<"ALICE\n";
        }
    }
}