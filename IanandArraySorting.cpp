#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int total = 0;

        if(n%6==0)
        {
            int k = n/6;
            total += k*15;
        }
        else if(n%8==0)
        {
            int k = n/8;
            total += k*20;
        }
        else if(n%10==0)
        {
            int k = n/10;
            total += k*25;
        }
        else
        {
            
        }
    }
}