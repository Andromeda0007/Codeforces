#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;

        int x = max(a, b);
        int y = min(a, b);

        int d = x-y;
                
        if(d==0)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            int k = y % d;
            int num = d-k;

            if(k==0)
            {
                cout << d << " " << 0 << endl;
            }
            else
            {
                cout << d << " " << num << endl;
            }
            
        }
        
        
    }
}