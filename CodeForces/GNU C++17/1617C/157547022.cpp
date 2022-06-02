#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
int a[100005];
void solve()
{
    int n;
    cin >> n;
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        st.insert(i);
    }
    vector<int> rem;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        if (st.find(v) != st.end())
        {
            st.erase(v);
        }
        else
        {
            rem.push_back(v);
        }
    }
    sort(rem.begin(), rem.end());
    reverse(rem.begin(),rem.end());
    int pt = 0;
    bool err = false;
    for (auto &nx : rem)
    {
        auto it = st.end();
        it--;
        int ctg = (*it);
        if (ctg > (nx - 1) / 2)
        {
            err = true;
            break;
        }
        st.erase(it);
    }
    if (err)
    {
        cout << "-1\n";
    }
    else
    {
        cout << rem.size() << '\n';
    }
}

int main()
{

    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}