// I Hate 1111
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int x;
    int cnt;
    cin>>t;
    while (t--)
    {
        cin >> x;
        cnt=0;
        while(true){
            if(x%11==0){
                cout<<"YES\n";break;
            }
            x-=111;
            if(x<0){
                cnt=1;break;
            }
        }
        if(cnt==1)cout<<"NO\n";
    }
}