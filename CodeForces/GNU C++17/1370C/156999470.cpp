#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
int solve(int n){
    if(n==1) return 0;
    else if(n==2 || n&1) return 1;
    if(!(n&(n-1))) return 0;
    else {
        int cnt=0,c1=0,c2=0,c3=0;
        for(ll i = 2 ; i * i <= n ; i++){
            if(n % i == 0){
                while(n % i == 0){
                    n /= i;
                    c1++;
                }
                if(i==2 && c1>1){c2=1;}
                if(i&1) {cnt+=c1;c3++;}
                c1=0;
            }
        }
        if(n > 1) {if(n&1) cnt++;}
        if(c2==1){
            return 1;
        }
        else{
            if(cnt>1) return 1;
            else return 0;
        }
    }
}

int main() {

    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(solve(n)) cout<<"Ashishgup"<<endl;
        else cout<<"FastestFinger"<<endl;
        // else{
        //     if(solve(n-1)==0 || solve(n-1)==2) cout<<"Ashishgup"<<endl;
        //     else cout<<"FastestFinger"<<endl;
        // }
    }
    return 0;
}