#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int a, b;
    cin >> a >> b;

    int maxm = max(a,b);
    int minm = min(a,b);
    int count = 0;

    while(maxm>2)
    {
        maxm -= 2;
        minm += 1;
        count++;

        if(maxm<=2)
        {
            int temp = minm;
            minm = maxm;
            maxm = temp; 
        }
    }

    if(minm==2 || maxm==2)
    {
        count++;
    }

    cout << count << endl;
    
}