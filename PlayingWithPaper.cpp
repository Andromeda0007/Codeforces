#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int l, b;
    cin >> l >> b;

    if(l%b==0)
    {
        cout << l/b << endl;
    }
    else
    {
        int ans=0;
        
        while(l%b!=0)
        {
            int k = l/b;
            ans += k;
            int temp = l-(k*b);
            l = b;
            b = temp;
            
        }
        ans += l/b;
        
        cout << ans << endl;
    }
}