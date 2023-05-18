#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        if(n==2)
        {
            cout << "NO" << endl;
        }
        else if(n%2==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool flag = false;
            while(n>1)
            {
                n = n/2;
                if(n%2==1 && n!=1)
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
              
        } 
    }
    
}