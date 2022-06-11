#include <bits/stdc++.h>
using namespace std;
bool checkpalin(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1])
         return 0;
    }
    return 1;
}
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
        if(checkpalin(s))
        {
            if(z%2==0) cout<<"BOB\n";
            else{
                if(z==1) cout<<"BOB\n";
                else cout<<"ALICE\n";
            }
        }
        else{
            if(x%2==1 && z==2 && s[x/2]=='0')
            cout<<"DRAW\n";
            else cout<<"ALICE\n";
        }
    }
}