#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a=0, b=0;
        cin>>n;
        while(n--){
            int p;
            cin>>p;
            if(p==1) a++;
            else  b++;
        }
        if(a%2==0 && b%2 ==0)
        {if(abs(a-b)<=2) cout<<"Yes\n";
        else cout<<"No\n";
        }
        else {
            if(abs(a-b)<=1) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}