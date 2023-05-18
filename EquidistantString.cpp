#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string s3 = "";
    int count=0;

    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]==s2[i])
        {
            s3 += s1[i];
        }
        else
        {
            s3 += "*";
            count++;
        }
    }

    if(count%2==1)
    {
        cout << "impossible" << endl;
    }
    else
    {
        int times = 0;
        for(int i=0; i<s1.size(); i++)
        {
            if(s3[i]=='*' && times%2==0)
            {
                s3[i] = s1[i];
                times++;
            }
            else if(s3[i]=='*' && times%2==1)
            {
                s3[i] = s2[i];
                times++;
            }
        }

        cout << s3 << endl;
    }

    
}