#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        int a = x-1 + y-1;
        int b = m-x + y-1;
        int c = x-1 + n-y;
        int d = m-x + n-y;

        int k = max(a, max(b, (max(c, d))));

        if(k==a || k==d)
        {
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
        }
        else
        {
            cout << 1 << " " << m << " " << n << " " << 1 << endl;
        }
    }
}