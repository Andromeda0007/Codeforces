#include <bits/stdc++.h>
using namespace std;
#define int  long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1;
        cin >> s1;
        bool flag = false;
        int count=0;

        if(s1[0]=='0')
        {
            flag = true;
        }

        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='?')
            {
                count++;
            }
        }

        int ans;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='?')
            {
                ans = i+1;
                break;
            }
        }


        if(flag == true)
        {
            cout << "0" << endl;
        }
        else if(count==0)
        {
            cout << "1" << endl;
        }
        else
        {
            if(ans==1)
            {
                cout << 9*pow(10, count-1) << endl;
            }
            else
            {
                cout << 10*pow(10, count-1)  << endl;
            }
        }
    }
}