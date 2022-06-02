#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve()
{
    int n, s = 0;
    cin >> n;
    int a[n], cnt = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((s - a[i]) / (float)(n - 1) == (float)a[i])
        {
            cnt = 0;
            break;
        }
    }
    if (cnt == 1)
        cout << "NO\n";
    else
        cout << "YES\n";
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