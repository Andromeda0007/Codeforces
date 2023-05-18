#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int c, o;
    cin >> c >> o;

    if(o==0)
    {
        cout << "NO" << endl;
    }
    else if (o==1 && c>0)
    {
        cout << "NO" << endl;
    }
    else if(o-c==1)
    {
        cout << "YES" << endl;
    }
    else if(c>o && (c-o+1)%2==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}