#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int money;
    int ans1, ans2, ans3;
    bool flag = false;

    for(int i=0; i<4; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(a+c <= n || a+d <= n)
        {
            ans1 = i+1;
            ans2 = a;
            ans3 = n-a;
            flag = true;
        }
        else if(b+c <= n || b+d <= n)
        {
            ans1 = i+1;
            ans2 = b;
            ans3 = n-b;
            flag = true;
        }

    }

    if(flag == false)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << ans1 << " " << ans2 << " " << ans3 << endl;
    }
}