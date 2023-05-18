#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int k = b-a;
        int l = c-b;

        if(k%2==0 && l%2==0)    cout << "YES" << endl;

        else if (k%2==1 && l%2==1)  cout << "YES" << endl;

        else    cout << "NO" << endl;

        
    }
}