#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
	// cin.tie(0); cout.tie(0); 
	
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll s=0;
        for(int i=0;i<n;i++){
            s+=a[i];
        }
        ll ans=0,prev=-1;
        for(int i=n-1;i>=0;i--){
            int curr;
            if((x-s)>=0) curr=(x-s)/(i+1);
            else curr =-1;
            ans+=(i+1)*(curr-prev);
            prev=curr;
            s-=a[i];
        }
        cout<<ans<<"\n";
    }
}
    