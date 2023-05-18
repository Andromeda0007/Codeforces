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

        int a, b;
        bool flag = false;

        for(int i=n; i>=(n/2-1); i--)
        {
            a = i;
            b = n-i;

            int num = (a*(a-1))/2 + (b*(b-1))/2;

            if(num==k)
            {
                flag = true;
                cout << "YES" << endl;
                for(int i=0; i<a; i++)
                {
                    cout << 1 << " ";
                }
                for(int i=0; i<n-a; i++)
                {
                    cout << -1 << " ";
                }
                cout << endl;
                break;
            }
        }

        if(flag==false)
        {
            cout << "NO" << endl;
        }
    }
}