#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll minn=1000000001;
        ll maxx= 0;
        for(ll i=0; i<n-1;i++){
            if(a[i]==a[i+1]){
                minn=min(minn,i);
                maxx=max(maxx,i);
            }
        }
        if(minn == maxx || minn==1000000001)
        cout<<0<<'\n';
        else 
        {
            if(maxx-minn<3)
                cout<<1<<'\n';
            else cout<<maxx-minn-1<<'\n';
        }
    }
}