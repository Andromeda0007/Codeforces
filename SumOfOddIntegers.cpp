#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;


        if(n < pow(k,2))
        {
            cout << "NO" << endl;
        }
        else
        {
            if(n%2==0 && k%2==1)
            {
                cout << "NO" << endl;
            }
            else if(n%2==1 && k%2==0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

}