#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a[500];
    cin >> t;
    while (t--)
    {
        cin >> n;
        int l = -1, r = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != (i + 1) && l == -1)
            {
                l = i;
            }
        }
        if (l != -1)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == (l + 1))
                    r = i;
            }
            reverse(a + l, a + r + 1);
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}