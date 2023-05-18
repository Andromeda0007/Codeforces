#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    int minm = min(v[0].first, v[0].second);
    int y = 0;
    int k;
    for (int i = 1; i < n; i++)
    {
        k = min(v[i].first, v[i].second);
        if (k < minm)
        {
            y++;
            break;
        }
    }
    if (n == 1)
    {
        cout << min(v[0].first, v[0].second);
    }
    else if (y == 0)
    {
        cout << k << endl;
    }
    else
    {
        cout << v[n - 1].first << endl;
    }
}