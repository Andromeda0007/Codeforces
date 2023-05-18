#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;

    int a = max(l1, l2);
    int b = min(r1, r2);

    int time = b-a+1;

    if(k>=a && k<=b)
    {
        time--;
    }

    if(time<=0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << time << endl;
    }
}