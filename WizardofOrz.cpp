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
        string s1 = "0123456789";
        string s2 = "";

        if(n==1)  s2 += "9";

        else if(n==2)  s2 +="98";

        else
        {
            s2 +="989";
            int size = n-3;

            int k = size/n;
            int rem = size%n;

            for(int i=0; i<k; i++)
            {
                s2 += s1;
            }

            for(int i=0; i<rem; i++)
            {
                s2 += s1[i];
            }
        } 

        cout << s2 << endl;

    }
}