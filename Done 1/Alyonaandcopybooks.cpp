#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if(n%4==0)
    {
        cout << 0 << endl;
    }
    else
    {
        int d = 4- n%4;
        int money;

        if(d==1)
        {
            money = min(a, min((3*c), (b+c)));
        }
        else if (d==2)
        {
            money = min(2*a, min(b, 2*c));
        }
        else
        {
            money = min(3*a, min((a+b), c));
        }

        cout << money << endl;
    } 

}