#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
ll n;
map<ll, int> m;
int solve(ll x)
{
    if (m[x])
        return m[x];
    ll m2 = x;
    int cnt = 0;
    while (m2>0)
    {
        cnt++;
        m2/= 10;
    }
    // cout<<cnt<<" "<<x<<endl;
    if (cnt >= n)
        return 0;
    ll p = x;
    int flag = 1;
    int j = 1e9;
    while (p>0)
    {
        if (p % 10 > 1)
        {
            j = min(j, 1 + solve(x * (p % 10)));
            flag = 0;
        }
        p/= 10;
    }
    if (flag)
        return 1e9;
    m[x] = j;
    return m[x];
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
    ll x, cnt = 0, temp, t = 1;
    cin >> n >> x;
    int ans = solve(x);
    if (ans == 1e9)
        cout << -1<<"\n";
    else
        cout << ans<<"\n";
}