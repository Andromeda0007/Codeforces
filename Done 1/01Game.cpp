#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1;
        cin >> s1;
        int count=0;

        for(int i=1; i<s1.size(); i++)
        {
            if(s1[i-1]!=s1[i])
            {
                count++;
                s1.erase(i-1, 2);
                i=0;
            }
        }
        (count%2==0)? cout << "NET\n" : cout << "DA\n";
    }
}