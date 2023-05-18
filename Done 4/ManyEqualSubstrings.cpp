#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, k;
    cin >> n >> k;
    string s1;
    cin >> s1;

    int count=0;
    for(int i=0; i<(s1.size()/2); i++)
    {
        char c1 = s1[0];
        if(s1[i]==s1[n-1-i] && s1[i]==s1[0])
        {
            count++;
        }
        else
        {
            break;
        }
    }

    string s2 ="";
    string s ="";
    s += s1;

    for(int i=count; i<s1.size(); i++)
    {
        s2 += s1[i];
    }

    for(int i=0; i<k-1; i++)
    {
        s += s2;
    }

    cout << s << endl;
}