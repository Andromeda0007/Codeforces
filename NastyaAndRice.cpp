#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b, c , d;
        cin >> n >> a >> b >> c >> d;
        
        int m = a+b;
        int k = a-b;
        int o = c-d;
        int p = c+d;
 
        bool flag;
        
        if(n*m >= o && k*n<=p)  flag = true;

        else flag = false;
        
        flag? cout << "YES\n" : cout << "NO\n";
    }
}