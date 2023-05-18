#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s1;
    cin >> s1;

    int maxm = max(a, b);
    int minm = min(a, b);
    a = minm - 1;
    b = maxm - 1;

    if(s1[a]==s1[b])
    {
        cout << 0 << endl;
    }
    else
    {   
        int money = 0;
        while(a!=b)
        {
            char c1 = s1[a];
            for(int i=a; i<=b; i++)
            {
                if(s1[i]==c1)
                {
                    a = i;
                }
            }

            if(a!=b)
            {
                money++;
                a++;
            }

        }

        cout << money << endl;
       
    }


}