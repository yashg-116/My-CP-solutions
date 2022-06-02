#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll a[n], c[n];
    ll b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                v.push_back(j);
                v.push_back(j + 1);
                ll y = a[j];
                a[j] = a[j + 1];
                a[j + 1] = y;
                ll y2 = b[j];
                b[j] = b[j + 1];
                b[j + 1] = y2;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                v.push_back(j);
                v.push_back(j + 1);
                ll y = a[j];
                a[j] = a[j + 1];
                a[j + 1] = y;
                ll y2 = b[j];
                b[j] = b[j + 1];
                b[j + 1] = y2;
            }
        }
    }
    if (is_sorted(a, a + n) && is_sorted(b, b + n))
    {
        if (v.size()  > 20000)
            cout << "-1\n";
        else
        {
            cout << v.size() / 2 << "\n";
            for (ll i = 0; i < v.size(); i += 2)
                cout << v[i] + 1 << " " << v[i + 1] + 1 << "\n";
        }
    }
    else
        cout << "-1\n";
}

int main()
{

//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}