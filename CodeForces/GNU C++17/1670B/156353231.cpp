#include <bits/stdc++.h>

using namespace std;
bool binary(char c[], char b, int k)
{
    int l = 0, r = k - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (c[m] == b)
            return 1;
        else if (c[m] > b)
            r = m - 1;
        else
            l = m + 1;
    }
    return 0;
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
        int n, k;
        string s;
        cin >> n;
        cin >> s;
        cin >> k;
        int c[26]={0};
        for (int i = 0; i < k; i++)
        {
            char h;
            cin >> h;
            c[h - 'a'] = 1;
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (c[s[i] - 'a'] == true)
            {
                v.push_back(i);
            }
        }
        if (v.size() == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            int res = v[0];
            for (int i = 1; i < v.size(); i++)
            {
                int x = v[i] - v[i - 1];
                res = max(res, x);
            }
            cout << res << '\n';
        }
    }
}