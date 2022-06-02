#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    int a[n], cnt = 0, in = -1, mini = 1000000000;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    if(n==2) {cout<<a[0]<<" "<<a[1]<<'\n'; return;}

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            int y = a[i] - a[i - 1];
            if (y < mini)
            {
                mini = y;
                in=i;
            }
        }
    }   
    for(int i=in;i<n;i++)
        cout<<a[i]<<" ";
    for(int i=0;i<in;i++)
        cout<<a[i]<<" ";
    cout << "\n";
}

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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}