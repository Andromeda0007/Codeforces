#include <bits/stdc++.h>
using namespace std;
#define int   long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        string s1="";

        for(int i=97; i<97+b; i++)
        {
            char c1 = char(i);
            s1 += c1;
        }

        string s2="";

        int k = n/b;
        int l = n%b;

        for(int i=0; i<k; i++)
        {
            s2 += s1;
        }

        for(int i=0; i<l; i++)
        {
            s2 += s1[i];
        }

        cout << s2 << endl;
    }
}